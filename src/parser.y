%{
#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "ast.h"

/* External lexer function */
extern int yylex(void);
extern FILE *yyin;
extern char *yytext;

/* Error reporting */
void yyerror(const char *s);
int yyparse(void);
%}

%union {
    int int_val;
    double float_val;
    char char_val;
    char *string_val;
}

/* Token definitions */
%token PACKAGE IMPORT FUNC VAR CONST
%token IF ELSE FOR RETURN BREAK CONTINUE
%token TRUE FALSE
%token INT FLOAT64 STRING BOOL
%token PLUS MINUS MULT DIV MOD
%token EQ NE LT LE GT GE
%token AND OR NOT
%token ASSIGN PLUS_ASSIGN MINUS_ASSIGN MULT_ASSIGN DIV_ASSIGN
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token COMMA SEMICOLON COLON DOT
%token <int_val> INTEGER_LIT
%token <float_val> FLOAT_LIT
%token <string_val> STRING_LIT IDENTIFIER
%token <char_val> CHAR_LIT
%token ERROR_TOKEN

/* Operator precedence and associativity */
%left OR
%left AND
%left EQ NE
%left LT LE GT GE
%left PLUS MINUS
%left MULT DIV MOD
%right NOT
%right UMINUS

/* Type declarations for non-terminals */
%type <string_val> import_spec param var_spec const_spec

%start program

%%

/* Program structure */
program
    : package_decl import_list top_level_decl_list
    {
        printf("\n✓ Parse successful: Valid Mini-Go program\n");
    }
    ;

package_decl
    : PACKAGE IDENTIFIER SEMICOLON
    {
        printf("Package: %s\n", $2);
        free($2);
    }
    ;

import_list
    : /* empty */
    | import_list import_decl
    ;

import_decl
    : IMPORT import_spec SEMICOLON
    | IMPORT LPAREN import_spec_list RPAREN SEMICOLON
    ;

import_spec_list
    : import_spec
    | import_spec_list import_spec
    ;

import_spec
    : STRING_LIT
    {
        printf("Import: %s\n", $1);
        free($1);
    }
    | IDENTIFIER STRING_LIT
    {
        printf("Import %s: %s\n", $1, $2);
        free($1);
        free($2);
    }
    ;

top_level_decl_list
    : /* empty */
    | top_level_decl_list top_level_decl
    ;

top_level_decl
    : function_decl
    | var_decl
    | const_decl
    ;

/* Function declaration */
function_decl
    : FUNC IDENTIFIER LPAREN param_list RPAREN return_type block
    {
        printf("Function: %s\n", $2);
        free($2);
    }
    | FUNC IDENTIFIER LPAREN RPAREN return_type block
    {
        printf("Function: %s\n", $2);
        free($2);
    }
    ;

param_list
    : param
    | param_list COMMA param
    ;

param
    : IDENTIFIER type
    {
        printf("Parameter: %s\n", $1);
        free($1);
    }
    | IDENTIFIER IDENTIFIER type
    {
        printf("Parameter: %s %s\n", $1, $2);
        free($1);
        free($2);
    }
    ;

return_type
    : /* empty */
    | type
    ;

type
    : INT
    | FLOAT64
    | STRING
    | BOOL
    | IDENTIFIER
    {
        free($1);
    }
    ;

/* Variable and constant declarations */
var_decl
    : VAR var_spec SEMICOLON
    | VAR LPAREN var_spec_list RPAREN SEMICOLON
    ;

var_spec_list
    : var_spec
    | var_spec_list var_spec
    ;

var_spec
    : IDENTIFIER type
    {
        printf("Variable: %s\n", $1);
        free($1);
    }
    | IDENTIFIER type ASSIGN expression
    {
        printf("Variable: %s (with initializer)\n", $1);
        free($1);
    }
    | IDENTIFIER ASSIGN expression
    {
        printf("Variable: %s (type inferred)\n", $1);
        free($1);
    }
    ;

const_decl
    : CONST const_spec SEMICOLON
    | CONST LPAREN const_spec_list RPAREN SEMICOLON
    ;

const_spec_list
    : const_spec
    | const_spec_list const_spec
    ;

const_spec
    : IDENTIFIER ASSIGN expression
    {
        printf("Constant: %s\n", $1);
        free($1);
    }
    | IDENTIFIER type ASSIGN expression
    {
        printf("Constant: %s\n", $1);
        free($1);
    }
    ;

/* Statements */
block
    : LBRACE stmt_list RBRACE
    ;

stmt_list
    : /* empty */
    | stmt_list stmt
    ;

stmt
    : expression SEMICOLON
    | var_decl
    | const_decl
    | if_stmt
    | for_stmt
    | return_stmt
    | break_stmt
    | continue_stmt
    | block
    ;

if_stmt
    : IF expression block
    | IF expression block ELSE stmt
    ;

for_stmt
    : FOR expression block
    | FOR for_init SEMICOLON expression SEMICOLON for_post block
    | FOR block
    ;

for_init
    : var_decl
    | expression
    ;

for_post
    : expression
    ;

return_stmt
    : RETURN SEMICOLON
    | RETURN expression SEMICOLON
    ;

break_stmt
    : BREAK SEMICOLON
    ;

continue_stmt
    : CONTINUE SEMICOLON
    ;

/* Expressions */
expression
    : primary_expr
    | unary_expr
    | binary_expr
    | assignment_expr
    ;

primary_expr
    : literal
    | IDENTIFIER
    {
        free($1);
    }
    | IDENTIFIER LPAREN argument_list RPAREN
    {
        printf("Function call: %s\n", $1);
        free($1);
    }
    | IDENTIFIER LPAREN RPAREN
    {
        printf("Function call: %s\n", $1);
        free($1);
    }
    | LPAREN expression RPAREN
    ;

argument_list
    : expression
    | argument_list COMMA expression
    ;

unary_expr
    : NOT expression %prec NOT
    | MINUS expression %prec UMINUS
    ;

binary_expr
    : expression PLUS expression
    | expression MINUS expression
    | expression MULT expression
    | expression DIV expression
    | expression MOD expression
    | expression EQ expression
    | expression NE expression
    | expression LT expression
    | expression LE expression
    | expression GT expression
    | expression GE expression
    | expression AND expression
    | expression OR expression
    ;

assignment_expr
    : IDENTIFIER ASSIGN expression
    {
        free($1);
    }
    | IDENTIFIER PLUS_ASSIGN expression
    {
        free($1);
    }
    | IDENTIFIER MINUS_ASSIGN expression
    {
        free($1);
    }
    | IDENTIFIER MULT_ASSIGN expression
    {
        free($1);
    }
    | IDENTIFIER DIV_ASSIGN expression
    {
        free($1);
    }
    ;

literal
    : INTEGER_LIT
    | FLOAT_LIT
    | STRING_LIT
    {
        free($1);
    }
    | CHAR_LIT
    | TRUE
    | FALSE
    ;

%%

void yyerror(const char *s) {
    syntax_error(s);
}


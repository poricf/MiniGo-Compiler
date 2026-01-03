/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_PARSER_TAB_H_INCLUDED
# define YY_YY_BUILD_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORT = 259,                  /* IMPORT  */
    FUNC = 260,                    /* FUNC  */
    VAR = 261,                     /* VAR  */
    CONST = 262,                   /* CONST  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    FOR = 265,                     /* FOR  */
    RETURN = 266,                  /* RETURN  */
    BREAK = 267,                   /* BREAK  */
    CONTINUE = 268,                /* CONTINUE  */
    TRUE = 269,                    /* TRUE  */
    FALSE = 270,                   /* FALSE  */
    INT = 271,                     /* INT  */
    FLOAT64 = 272,                 /* FLOAT64  */
    STRING = 273,                  /* STRING  */
    BOOL = 274,                    /* BOOL  */
    PLUS = 275,                    /* PLUS  */
    MINUS = 276,                   /* MINUS  */
    MULT = 277,                    /* MULT  */
    DIV = 278,                     /* DIV  */
    MOD = 279,                     /* MOD  */
    EQ = 280,                      /* EQ  */
    NE = 281,                      /* NE  */
    LT = 282,                      /* LT  */
    LE = 283,                      /* LE  */
    GT = 284,                      /* GT  */
    GE = 285,                      /* GE  */
    AND = 286,                     /* AND  */
    OR = 287,                      /* OR  */
    NOT = 288,                     /* NOT  */
    ASSIGN = 289,                  /* ASSIGN  */
    PLUS_ASSIGN = 290,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 291,            /* MINUS_ASSIGN  */
    MULT_ASSIGN = 292,             /* MULT_ASSIGN  */
    DIV_ASSIGN = 293,              /* DIV_ASSIGN  */
    LPAREN = 294,                  /* LPAREN  */
    RPAREN = 295,                  /* RPAREN  */
    LBRACE = 296,                  /* LBRACE  */
    RBRACE = 297,                  /* RBRACE  */
    LBRACKET = 298,                /* LBRACKET  */
    RBRACKET = 299,                /* RBRACKET  */
    COMMA = 300,                   /* COMMA  */
    SEMICOLON = 301,               /* SEMICOLON  */
    COLON = 302,                   /* COLON  */
    DOT = 303,                     /* DOT  */
    INTEGER_LIT = 304,             /* INTEGER_LIT  */
    FLOAT_LIT = 305,               /* FLOAT_LIT  */
    STRING_LIT = 306,              /* STRING_LIT  */
    IDENTIFIER = 307,              /* IDENTIFIER  */
    CHAR_LIT = 308,                /* CHAR_LIT  */
    ERROR_TOKEN = 309,             /* ERROR_TOKEN  */
    UMINUS = 310                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "src/parser.y"

    int int_val;
    double float_val;
    char char_val;
    char *string_val;

#line 126 "build/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD_PARSER_TAB_H_INCLUDED  */

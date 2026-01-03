#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "error.h"
#include "parser.tab.h"

extern FILE *yyin;
extern int yyparse(void);
extern int yylex(void);
extern char *yytext;
extern YYSTYPE yylval;

/* Demo mode flags */
static int lex_only_mode = 0;
static int verbose_mode = 0;

/* Function to print token name for demo */
const char* token_name(int token) {
    switch(token) {
        case PACKAGE: return "PACKAGE";
        case IMPORT: return "IMPORT";
        case FUNC: return "FUNC";
        case VAR: return "VAR";
        case CONST: return "CONST";
        case IF: return "IF";
        case ELSE: return "ELSE";
        case FOR: return "FOR";
        case RETURN: return "RETURN";
        case BREAK: return "BREAK";
        case CONTINUE: return "CONTINUE";
        case TRUE: return "TRUE";
        case FALSE: return "FALSE";
        case INT: return "INT";
        case FLOAT64: return "FLOAT64";
        case STRING: return "STRING";
        case BOOL: return "BOOL";
        case PLUS: return "PLUS";
        case MINUS: return "MINUS";
        case MULT: return "MULT";
        case DIV: return "DIV";
        case MOD: return "MOD";
        case EQ: return "EQ";
        case NE: return "NE";
        case LT: return "LT";
        case LE: return "LE";
        case GT: return "GT";
        case GE: return "GE";
        case AND: return "AND";
        case OR: return "OR";
        case NOT: return "NOT";
        case ASSIGN: return "ASSIGN";
        case PLUS_ASSIGN: return "PLUS_ASSIGN";
        case MINUS_ASSIGN: return "MINUS_ASSIGN";
        case MULT_ASSIGN: return "MULT_ASSIGN";
        case DIV_ASSIGN: return "DIV_ASSIGN";
        case LPAREN: return "LPAREN";
        case RPAREN: return "RPAREN";
        case LBRACE: return "LBRACE";
        case RBRACE: return "RBRACE";
        case LBRACKET: return "LBRACKET";
        case RBRACKET: return "RBRACKET";
        case COMMA: return "COMMA";
        case SEMICOLON: return "SEMICOLON";
        case COLON: return "COLON";
        case DOT: return "DOT";
        case INTEGER_LIT: return "INTEGER_LIT";
        case FLOAT_LIT: return "FLOAT_LIT";
        case STRING_LIT: return "STRING_LIT";
        case CHAR_LIT: return "CHAR_LIT";
        case IDENTIFIER: return "IDENTIFIER";
        case ERROR_TOKEN: return "ERROR_TOKEN";
        case 0: return "EOF";
        default: return "UNKNOWN";
    }
}

/* Lexer-only demo mode */
void demo_lexer(void) {
    int token;
    int line = 1;
    
    printf("=== LEXER DEMO MODE ===\n");
    printf("Tokenizing input...\n\n");
    
    while ((token = yylex()) != 0) {
        if (get_line_number() != line) {
            line = get_line_number();
            printf("\n[Line %d]\n", line);
        }
        
        printf("  Token: %-20s", token_name(token));
        
        /* Print token value for literals and identifiers */
        if (token == INTEGER_LIT) {
            printf("  Value: %d", yylval.int_val);
        } else if (token == FLOAT_LIT) {
            printf("  Value: %f", yylval.float_val);
        } else if (token == STRING_LIT) {
            printf("  Value: \"%s\"", yylval.string_val);
            free(yylval.string_val);
        } else if (token == CHAR_LIT) {
            printf("  Value: '%c'", yylval.char_val);
        } else if (token == IDENTIFIER) {
            printf("  Value: %s", yylval.string_val);
            free(yylval.string_val);
        } else {
            printf("  Text: \"%s\"", yytext);
        }
        
        printf("\n");
        
        if (token == ERROR_TOKEN) {
            break;
        }
    }
    
    printf("\n=== End of Lexer Demo ===\n");
}

void print_usage(const char *prog_name) {
    printf("Usage: %s [OPTIONS] [FILE]\n", prog_name);
    printf("\nOptions:\n");
    printf("  -l, --lex       Run lexer only (tokenize input)\n");
    printf("  -p, --parse     Run parser (default)\n");
    printf("  -v, --verbose   Verbose output\n");
    printf("  -h, --help      Show this help message\n");
    printf("\nIf FILE is not provided, reads from stdin.\n");
}

int main(int argc, char *argv[]) {
    FILE *input_file = NULL;
    int mode_set = 0;
    int i;
    
    /* Initialize error handling */
    error_init();
    
    /* Parse command line arguments */
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-l") == 0 || strcmp(argv[i], "--lex") == 0) {
            lex_only_mode = 1;
            mode_set = 1;
        } else if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--parse") == 0) {
            lex_only_mode = 0;
            mode_set = 1;
        } else if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--verbose") == 0) {
            verbose_mode = 1;
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            print_usage(argv[0]);
            return 0;
        } else if (argv[i][0] != '-') {
            /* This should be the input file */
            input_file = fopen(argv[i], "r");
            if (!input_file) {
                fprintf(stderr, "Error: Cannot open file '%s'\n", argv[i]);
                return 1;
            }
            yyin = input_file;
            break;
        } else {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            print_usage(argv[0]);
            return 1;
        }
    }
    
    /* If no file specified, use stdin */
    if (!input_file) {
        yyin = stdin;
        if (!mode_set) {
            printf("Mini-Go Compiler (Iteration 1: Lexical & Syntax Analysis)\n");
            printf("Enter Mini-Go code (Ctrl+D to end):\n");
        }
    }
    
    /* Run lexer-only mode or parser mode */
    int result = 0;
    if (lex_only_mode) {
        demo_lexer();
    } else {
        if (verbose_mode) {
            printf("=== PARSER DEMO MODE ===\n");
            printf("Parsing input...\n\n");
        }
        
        result = yyparse();
        
        if (verbose_mode) {
            printf("\n=== End of Parser Demo ===\n");
        }
        
        if (result == 0) {
            printf("Compilation successful.\n");
        } else {
            printf("Compilation failed.\n");
        }
    }
    
    /* Close file if opened */
    if (input_file) {
        fclose(input_file);
    }
    
    return (result == 0 ? 0 : 1);
}


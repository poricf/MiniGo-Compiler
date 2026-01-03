#include "error.h"
#include <stdarg.h>

/* Current line number tracker */
int current_line = 1;

void error_init(void) {
    current_line = 1;
}

void lex_error(const char *message) {
    fprintf(stderr, "Lexical error at line %d: %s\n", current_line, message);
}

void syntax_error(const char *message) {
    fprintf(stderr, "Syntax error at line %d: %s\n", current_line, message);
}

void error(const char *format, ...) {
    va_list args;
    va_start(args, format);
    fprintf(stderr, "Error at line %d: ", current_line);
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");
    va_end(args);
}

int get_line_number(void) {
    return current_line;
}

void set_line_number(int line) {
    current_line = line;
}



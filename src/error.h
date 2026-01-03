#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>
#include <stdlib.h>

/* Error handling module for lexical and syntax errors */

/* Current line number in source file */
extern int current_line;

/* Initialize error handling */
void error_init(void);

/* Report a lexical error */
void lex_error(const char *message);

/* Report a syntax error */
void syntax_error(const char *message);

/* Report a general error */
void error(const char *format, ...);

/* Get current line number */
int get_line_number(void);

/* Set current line number */
void set_line_number(int line);

#endif /* ERROR_H */



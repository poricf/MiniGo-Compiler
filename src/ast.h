#ifndef AST_H
#define AST_H

/* Abstract Syntax Tree module
 * 
 * This module is a placeholder for Iteration 2.
 * The AST structure will be implemented in later iterations.
 * For now, we only define the interface to maintain modularity.
 */

/* AST node types (placeholder for future use) */
typedef enum {
    AST_PROGRAM,
    AST_PACKAGE,
    AST_IMPORT,
    AST_FUNCTION,
    AST_VAR_DECL,
    AST_CONST_DECL,
    AST_STMT,
    AST_EXPR
} ast_node_type_t;

/* Forward declaration for AST node structure */
typedef struct ast_node ast_node_t;

/* Placeholder functions for future implementation */
ast_node_t* ast_create_node(ast_node_type_t type);
void ast_free_node(ast_node_t *node);

#endif /* AST_H */



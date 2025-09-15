#ifndef AST_GENERATOR_H
#define AST_GENERATOR_H

#include "../structures/parser.h"

// Funciones para crear y manipular nodos del AST
ASTNode *create_ast_node(const char *id, const char *label);
ASTNode *create_example_ast();

// Funciones para generar archivos y reportes
void generate_ast_dot_file(ASTNode *root, const char *filename);
void generate_ast_image(const char *dot_filename, const char *png_filename);
char *generate_ast_text(ASTNode *root);

// Función para limpiar memoria
void ASTNode_destroy(ASTNode *node);

#endif // AST_GENERATOR_H

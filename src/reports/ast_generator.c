#include "../structures/parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Contador para generar IDs únicos para los nodos
static int node_counter = 0;

// Función para crear un nuevo nodo del AST
ASTNode *create_ast_node(const char *id, const char *label)
{
    ASTNode *node = (ASTNode *)calloc(1, sizeof(ASTNode));
    node->id = strdup(id);
    node->label = strdup(label);
    node->children = NULL;
    return node;
}

// Función recursiva para generar el contenido DOT
void generate_dot_content_recursive(ASTNode *node, FILE *file)
{
    if (!node)
        return;

    // Escribir el nodo actual
    fprintf(file, "    %s [label=\"%s\", shape=box, style=filled, fillcolor=lightblue];\n",
            node->id, node->label);

    // Procesar todos los hijos
    ASTNodeList *child_list = node->children;
    while (child_list)
    {
        if (child_list->node)
        {
            // Escribir la conexión
            fprintf(file, "    %s -> %s;\n", node->id, child_list->node->id);

            // Generar recursivamente el contenido del hijo
            generate_dot_content_recursive(child_list->node, file);
        }
        child_list = child_list->next;
    }
}

// Función para generar el archivo DOT del AST
void generate_ast_dot_file(ASTNode *root, const char *filename)
{
    if (!root)
        return;

    FILE *file = fopen(filename, "w");
    if (!file)
    {
        fprintf(stderr, "Error: No se pudo crear el archivo %s\n", filename);
        return;
    }

    fprintf(file, "digraph AST {\n");
    fprintf(file, "    rankdir=TB;\n");
    fprintf(file, "    node [fontname=\"Arial\"];\n");
    fprintf(file, "    edge [fontname=\"Arial\"];\n\n");

    generate_dot_content_recursive(root, file);

    fprintf(file, "}\n");
    fclose(file);

    printf("Archivo DOT generado: %s\n", filename);
}

// Función para generar imagen PNG desde archivo DOT
void generate_ast_image(const char *dot_filename, const char *png_filename)
{
    char command[512];
    snprintf(command, sizeof(command), "dot -Tpng %s -o %s", dot_filename, png_filename);

    int result = system(command);
    if (result == 0)
    {
        printf("Imagen PNG generada: %s\n", png_filename);
    }
    else
    {
        printf("Error: No se pudo generar la imagen. Asegúrate de que Graphviz esté instalado.\n");
    }
}

// Función recursiva para generar representación textual del AST
void generate_ast_text_recursive(ASTNode *node, FILE *file, int depth)
{
    if (!node)
        return;

    // Escribir indentación
    for (int i = 0; i < depth; i++)
    {
        fprintf(file, "  ");
    }

    fprintf(file, "├─ %s\n", node->label);

    // Procesar todos los hijos
    ASTNodeList *child_list = node->children;
    while (child_list)
    {
        if (child_list->node)
        {
            generate_ast_text_recursive(child_list->node, file, depth + 1);
        }
        child_list = child_list->next;
    }
}

// Función para generar representación textual del AST
char *generate_ast_text(ASTNode *root)
{
    if (!root)
        return strdup("AST vacío\n");

    FILE *temp_file = tmpfile();
    if (!temp_file)
        return strdup("Error al generar AST textual\n");

    fprintf(temp_file, "AST - Árbol de Sintaxis Abstracta\n");
    fprintf(temp_file, "================================\n\n");

    generate_ast_text_recursive(root, temp_file, 0);

    // Obtener el tamaño del archivo
    fseek(temp_file, 0, SEEK_END);
    long size = ftell(temp_file);
    fseek(temp_file, 0, SEEK_SET);

    // Leer el contenido
    char *content = (char *)malloc(size + 1);
    fread(content, 1, size, temp_file);
    content[size] = '\0';

    fclose(temp_file);
    return content;
}

// Función para crear un AST de ejemplo
ASTNode *create_example_ast()
{
    node_counter = 0;

    // Crear nodos del AST de ejemplo
    ASTNode *program = create_ast_node("node0", "Program");

    ASTNode *declarations = create_ast_node("node1", "Declarations");
    ASTNode *statements = create_ast_node("node2", "Statements");

    // Agregar declaraciones y statements al programa
    ASTNode_addChild(program, declarations);
    ASTNode_addChild(program, statements);

    // Crear declaraciones
    ASTNode *var_decl = create_ast_node("node3", "VarDecl");
    ASTNode *int_type = create_ast_node("node4", "int");
    ASTNode *var_name = create_ast_node("node5", "x");
    ASTNode *init_value = create_ast_node("node6", "10");

    ASTNode_addChild(declarations, var_decl);
    ASTNode_addChild(var_decl, int_type);
    ASTNode_addChild(var_decl, var_name);
    ASTNode_addChild(var_decl, init_value);

    // Crear statements
    ASTNode *assignment = create_ast_node("node7", "Assignment");
    ASTNode *assign_var = create_ast_node("node8", "x");
    ASTNode *expression = create_ast_node("node9", "Expression");
    ASTNode *add_op = create_ast_node("node10", "+");
    ASTNode *left_operand = create_ast_node("node11", "x");
    ASTNode *right_operand = create_ast_node("node12", "5");

    ASTNode_addChild(statements, assignment);
    ASTNode_addChild(assignment, assign_var);
    ASTNode_addChild(assignment, expression);
    ASTNode_addChild(expression, add_op);
    ASTNode_addChild(add_op, left_operand);
    ASTNode_addChild(add_op, right_operand);

    // Crear un if statement
    ASTNode *if_stmt = create_ast_node("node13", "IfStatement");
    ASTNode *condition = create_ast_node("node14", "Condition");
    ASTNode *gt_op = create_ast_node("node15", ">");
    ASTNode *cond_left = create_ast_node("node16", "x");
    ASTNode *cond_right = create_ast_node("node17", "15");
    ASTNode *if_body = create_ast_node("node18", "Block");
    ASTNode *println_stmt = create_ast_node("node19", "println");
    ASTNode *println_arg = create_ast_node("node20", "x es mayor que 15");

    ASTNode_addChild(statements, if_stmt);
    ASTNode_addChild(if_stmt, condition);
    ASTNode_addChild(if_stmt, if_body);
    ASTNode_addChild(condition, gt_op);
    ASTNode_addChild(gt_op, cond_left);
    ASTNode_addChild(gt_op, cond_right);
    ASTNode_addChild(if_body, println_stmt);
    ASTNode_addChild(println_stmt, println_arg);

    return program;
}

// Función para limpiar la memoria del AST
void ASTNode_destroy(ASTNode *node)
{
    if (!node)
        return;

    // Limpiar hijos recursivamente
    ASTNodeList *current = node->children;
    while (current)
    {
        ASTNodeList *next = current->next;
        if (current->node)
        {
            ASTNode_destroy(current->node);
        }
        free(current);
        current = next;
    }

    // Limpiar el nodo actual
    if (node->id)
        free(node->id);
    if (node->label)
        free(node->label);
    free(node);
}

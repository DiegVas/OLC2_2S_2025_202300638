#include "ast.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Contador global para IDs únicos
static int node_counter = 0;

// Función para crear un nuevo nodo AST
ASTVal *create_ast_node(const char *value)
{
    ASTVal *node = malloc(sizeof(ASTVal));
    node->id = malloc(20);
    sprintf(node->id, "node%d", node_counter++);
    node->value = malloc(strlen(value) + 1);
    strcpy(node->value, value);
    node->children = malloc(sizeof(ASTList));
    node->children->head = NULL;
    return node;
}

// Función para agregar un hijo a un nodo
void add_child(ASTVal *parent, ASTVal *child)
{
    ASTNode *new_node = malloc(sizeof(ASTNode));
    new_node->value = child;
    new_node->next = parent->children->head;
    parent->children->head = new_node;
}

// Función recursiva para recorrer y generar el DOT
void recorrer_nodo(FILE *dot_file, ASTVal *nodo, char *nodos_str, char *conexiones_str)
{
    if (!nodo)
        return;

    // Agregar definición del nodo
    char nodo_def[256];
    sprintf(nodo_def, "%s [label=\"%s\"];\n", nodo->id, nodo->value);
    strcat(nodos_str, nodo_def);

    // Recorrer hijos
    ASTNode *current = nodo->children->head;
    while (current)
    {
        // Agregar conexión
        char conexion[256];
        sprintf(conexion, "%s -> %s;\n", nodo->id, current->value->id);
        strcat(conexiones_str, conexion);

        // Recorrer recursivamente
        recorrer_nodo(dot_file, current->value, nodos_str, conexiones_str);
        current = current->next;
    }
}

// Función para generar DOT desde un nodo raíz
void generar_dot(ASTVal *root)
{
    FILE *dot_file = fopen("reports/ast.dot", "w");
    if (!dot_file)
    {
        printf("Error: No se pudo crear el archivo ast.dot\n");
        return;
    }

    fprintf(dot_file, "digraph AST {\n");
    fprintf(dot_file, "node [shape=box];\n");

    // Buffers para almacenar nodos y conexiones
    char *nodos_str = malloc(4096);
    char *conexiones_str = malloc(4096);
    nodos_str[0] = '\0';
    conexiones_str[0] = '\0';

    recorrer_nodo(dot_file, root, nodos_str, conexiones_str);

    fprintf(dot_file, "%s", nodos_str);
    fprintf(dot_file, "%s", conexiones_str);
    fprintf(dot_file, "}\n");

    free(nodos_str);
    free(conexiones_str);
    fclose(dot_file);

    // Generar imagen PNG
    char command[512];
    snprintf(command, sizeof(command), "dot -Tpng reports/ast.dot -o reports/ast.png");

    int result = system(command);
    if (result == 0)
    {
        printf("✓ AST generado exitosamente: reports/ast.dot y reports/ast.png\n");
    }
    else
    {
        printf("⚠ Advertencia: No se pudo generar la imagen PNG. ¿Está instalado Graphviz?\n");
        printf("  Instalar con: sudo apt-get install graphviz\n");
    }
}

// Función para generar AST simple con INICIO y 3 hijos
void generate_simple_ast(InstruccionList *list)
{
    node_counter = 0; // Reiniciar contador

    ASTVal *root = create_ast_node("INICIO");

    InstruccionNode *current = list->head;

    while (current)
    {
        ASTVal *hijo = ast_execute(current->instr);
        add_child(root, hijo);
        current = current->next;
    }

    // Generar archivo DOT
    generar_dot(root);
}

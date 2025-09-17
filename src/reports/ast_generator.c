#include "ast.h"

// Función para generar un AST de ejemplo con datos aleatorios
void generate_random_ast()
{
    // Inicializar semilla para números aleatorios
    srand(time(NULL));

    // Arrays con nombres de nodos de ejemplo
    const char *node_types[] = {
        "Programa", "Bloque", "Declaracion", "Asignacion", "Expresion",
        "IfStatement", "WhileLoop", "ForLoop", "FunctionCall", "Variable",
        "Literal", "BinaryOp", "UnaryOp", "Array", "Objeto",
        "Clase", "Metodo", "Parametro", "Return", "Print"};

    const char *operators[] = {"+", "-", "*", "/", "=", "==", "!=", "<", ">", "<=", ">="};
    const char *literals[] = {"42", "3.14", "true", "false", "\"Hola\"", "\"Mundo\"", "100", "0"};
    const char *variables[] = {"x", "y", "z", "contador", "suma", "resultado", "temp", "valor"};

    int num_node_types = sizeof(node_types) / sizeof(node_types[0]);
    int num_operators = sizeof(operators) / sizeof(operators[0]);
    int num_literals = sizeof(literals) / sizeof(literals[0]);
    int num_variables = sizeof(variables) / sizeof(variables[0]);

    // Crear archivo .dot
    FILE *dot_file = fopen("reports/ast.dot", "w");
    if (!dot_file)
    {
        printf("Error: No se pudo crear el archivo ast.dot\n");
        return;
    }

    fprintf(dot_file, "digraph AST {\n");
    fprintf(dot_file, "    rankdir=TB;\n");
    fprintf(dot_file, "    node [shape=box, style=filled, fontname=\"Arial\"];\n");
    fprintf(dot_file, "    edge [color=blue];\n");
    fprintf(dot_file, "    \n");

    // Generar ID único basado en tiempo para mostrar que se actualiza
    int random_id = rand() % 1000;

    // Crear nodo raíz
    fprintf(dot_file, "    node0 [label=\"Programa\\nID: %d\", fillcolor=lightblue];\n", random_id);

    // Generar estructura de AST aleatorio
    int node_id = 1;
    int max_nodes = 15 + rand() % 10; // Entre 15 y 25 nodos

    for (int i = 1; i < max_nodes; i++)
    {
        int node_type = rand() % num_node_types;
        const char *color;
        const char *label;

        // Asignar colores según el tipo de nodo
        switch (rand() % 6)
        {
        case 0:
            color = "lightgreen";
            break;
        case 1:
            color = "lightcoral";
            break;
        case 2:
            color = "lightyellow";
            break;
        case 3:
            color = "lightpink";
            break;
        case 4:
            color = "lightcyan";
            break;
        default:
            color = "lightgray";
            break;
        }

        // Generar etiqueta del nodo
        if (strstr(node_types[node_type], "Op"))
        {
            label = operators[rand() % num_operators];
        }
        else if (strcmp(node_types[node_type], "Literal") == 0)
        {
            label = literals[rand() % num_literals];
        }
        else if (strcmp(node_types[node_type], "Variable") == 0)
        {
            label = variables[rand() % num_variables];
        }
        else
        {
            label = node_types[node_type];
        }

        fprintf(dot_file, "    node%d [label=\"%s\", fillcolor=%s];\n", i, label, color);

        // Conectar con nodo padre (distribución aleatoria)
        int parent = rand() % i;
        fprintf(dot_file, "    node%d -> node%d;\n", parent, i);
    }

    // Agregar algunos nodos especiales
    fprintf(dot_file, "    node%d [label=\"Random: %d\", fillcolor=orange];\n", max_nodes, rand() % 100);
    fprintf(dot_file, "    node0 -> node%d;\n", max_nodes);

    fprintf(dot_file, "}\n");
    fclose(dot_file);

    // Generar imagen PNG usando dot (Graphviz)
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

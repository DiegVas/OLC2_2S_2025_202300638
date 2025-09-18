# Implementación de Módulos - Compilador JavaLang

## Tabla de Contenidos

1. [Arquitectura General](#1-arquitectura-general)
2. [Módulo Lexer (Análisis Léxico)](#2-módulo-lexer-análisis-léxico)
3. [Módulo Parser (Análisis Sintáctico)](#3-módulo-parser-análisis-sintáctico)
4. [Módulo AST (Árbol de Sintaxis Abstracta)](#4-módulo-ast-árbol-de-sintaxis-abstracta)
5. [Módulo Semántico (Análisis Semántico)](#5-módulo-semántico-análisis-semántico)
6. [Módulo GUI (Interfaz Gráfica)](#6-módulo-gui-interfaz-gráfica)
7. [Integración de Módulos](#7-integración-de-módulos)
8. [Estructuras de Datos](#8-estructuras-de-datos)
9. [Sistema de Compilación](#9-sistema-de-compilación)

---

## 1. Arquitectura General

### 1.1 Visión General

El compilador JavaLang está diseñado con una arquitectura modular que sigue el patrón clásico de compiladores:

```text
Código Fuente → Lexer → Parser → AST → Semántico → Intérprete/Ejecutor
                                          ↓
                                    GUI (Visualización)
```

### 1.2 Módulos Principales

- **Lexer**: Análisis léxico y tokenización
- **Parser**: Análisis sintáctico y construcción del AST
- **AST**: Representación del árbol de sintaxis abstracta
- **Semántico**: Análisis semántico y ejecución
- **GUI**: Interfaz gráfica de usuario

### 1.3 Estructura de Archivos

```text
src/
├── main.c                    # Punto de entrada
├── parser/
│   ├── lexer.l              # Definición del lexer (Flex)
│   ├── parser.y             # Definición del parser (Bison)
│   └── semantic/            # Módulo semántico
├── structures/              # Estructuras de datos compartidas
├── reports/                 # Generación de AST y reportes
└── UI/                      # Interfaz gráfica (GTK)
```

---

## 2. Módulo Lexer (Análisis Léxico)

### 2.1 Archivo Principal: `src/parser/lexer.l`

#### Características
- **Herramienta**: Flex (GNU Flex)
- **Función**: Convierte el código fuente en tokens
- **Salida**: Stream de tokens para el parser

#### Implementación

```c
%{
#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
#include <stdbool.h>
#include "../structures/parser.h"

extern ErrorList *list_errors;
int yycolumn = 1;

#define YY_USER_ACTION \
    yylloc.first_line = yylineno; \
    yylloc.first_column = yycolumn; \
    yylloc.last_line = yylineno; \
    yylloc.last_column = yycolumn + yyleng - 1; \
    yycolumn += yyleng;
%}

%option noyywrap yylineno
```

#### Tokens Principales
```c
// Tipos de datos básicos
NUM     [0-9]+
DEC     [0-9]+"."[0-9]+
DECF    [0-9]+"."[0-9]+"f"
ID      [A-Za-z][A-Za-z0-9_]*
STR     \"([^\\"]|\\.)*\"
CHR     \'([^\\']|\\.)*\'

// Palabras reservadas
"int"       return INT;
"float"     return FLOAT;
"double"    return DOUBLE;
"string"    return STRING;
"char"      return CHAR;
"boolean"   return BOOL;
"if"        return IF;
"else"      return ELSE;
"while"     return WHILE;
"for"       return FOR;
// ... más tokens
```

#### Manejo de Errores
```c
void showError() {
    Error *error = Error_create(
        "Léxico", 
        "Global", 
        "Carácter no reconocido", 
        yylineno, 
        yycolumn
    );
    ErrorList_addError(list_errors, error);
}
```

### 2.2 Funcionalidades

#### Reconocimiento de Tokens
- **Literales**: Números enteros, flotantes, cadenas, caracteres
- **Identificadores**: Variables, funciones, clases
- **Operadores**: Aritméticos, lógicos, de comparación, de asignación
- **Palabras reservadas**: Keywords del lenguaje
- **Símbolos**: Delimitadores, separadores

#### Manejo de Ubicación
```c
typedef struct YYLTYPE {
    int first_line;
    int first_column;
    int last_line;
    int last_column;
} YYLTYPE;
```

---

## 3. Módulo Parser (Análisis Sintáctico)

### 3.1 Archivo Principal: `src/parser/parser.y`

#### Propósito y Características

- **Herramienta**: Bison (GNU Bison)
- **Tipo**: Parser LALR(1)
- **Función**: Construye el AST basado en la gramática

#### Estructura Base
```c
%{
#include <stdio.h>
#include <string.h>
#include "../structures/parser.h"

int yylex();
int yyerror(const char *s);

extern InstruccionList *list_tokens;
extern ErrorList *list_errors;
%}

%define parse.error verbose
%locations

%union {
    char* sval;
    int ival;
    Instruccion* instr;
    InstruccionList* instrList;
    Expression* expr;
    ExpressionList* exprList;
    // ... más tipos
}
```

### 3.2 Definición de Tokens
```c
// Valores
%token <sval> STR CHR BOOLEAN ID OTHER NUM DEC DECF

// Palabras reservadas
%token <sval> INT STRING CHAR FLOAT DOUBLE BOOL
%token IF ELSE SWITCH CASE WHILE FOR
%token PUBLIC STATIC MAIN VOID RETURN
%token NEW PRINTLN

// Operadores
%token EQUALS NOT_EQUALS
%token AND OR NOT
%token INCREMENT DECREMENT
%token PLUS_ASSIGN MINUS_ASSIGN
```

### 3.3 Precedencia de Operadores
```c
%right '='
%left OR
%left AND
%left EQUALS NOT_EQUALS
%left '<' '>' LESS_EQUALS GREATER_EQUALS
%left '+' '-'
%left '*' '/' '%'
%right NOT NEGATIVE
%left '(' ')'
%left '[' ']'
```

### 3.4 Reglas Gramaticales
```c
programa: instrucciones {
    list_tokens = $1;
};

instrucciones: instrucciones instruccion {
    $$ = InstruccionList_append($1, $2);
} | instruccion {
    $$ = InstruccionList_create();
    $$ = InstruccionList_append($$, $1);
};

instruccion: declaracion
           | asignacion
           | if_statement
           | while_statement
           | for_statement
           | println_statement
           | bloque_instrucciones
           ;
```

### 3.5 Construcción del AST
```c
declaracion: tipo ID '=' expresion ';' {
    $$ = create_instruction(
        "DECLARATION",
        $1, $2, $4,
        @1.first_line, @1.first_column
    );
};

expresion: expresion '+' expresion {
    $$ = create_expression(
        "SUM", NULL,
        @1.first_line, @1.first_column,
        $1, $3
    );
};
```

---

## 4. Módulo AST (Árbol de Sintaxis Abstracta)

### 4.1 Archivos Principales
- `src/reports/ast.h` - Definiciones
- `src/reports/ast_generator.c` - Generación del AST
- `src/reports/ast_execute.c` - Recorrido del AST
- `src/reports/ast_evaluate.c` - Evaluación de nodos

### 4.2 Estructuras de Datos
```c
typedef struct ASTVal {
    char *id;           // Identificador del nodo
    char *value;        // Valor del nodo
    ASTList *children;  // Lista de hijos
} ASTVal;

typedef struct ASTNode {
    ASTVal *value;
    ASTNode *next;
} ASTNode;

typedef struct ASTList {
    ASTNode *head;
} ASTList;
```

### 4.3 Funciones Principales

#### Creación de Nodos
```c
ASTVal *create_ast_node(const char *value) {
    ASTVal *node = malloc(sizeof(ASTVal));
    node->id = generate_unique_id();
    node->value = strdup(value);
    node->children = create_ast_list();
    return node;
}
```

#### Ejecución del AST
```c
ASTVal *ast_execute(Instruccion *instr) {
    if (!instr) return NULL;
    
    ASTVal *node = create_ast_node(instr->type);
    
    if (strcmp(instr->type, "DECLARATION") == 0) {
        add_child(node, create_ast_node(instr->value1)); // tipo
        add_child(node, create_ast_node(instr->value2)); // id
        if (instr->expr) {
            add_child(node, ast_evaluate(instr->expr));
        }
    }
    // ... más casos
    
    return node;
}
```

#### Evaluación de Expresiones
```c
ASTVal *ast_evaluate(Expression *expr) {
    if (!expr) return NULL;
    
    ASTVal *node = create_ast_node(expr->type);
    
    if (expr->left) {
        add_child(node, ast_evaluate(expr->left));
    }
    if (expr->right) {
        add_child(node, ast_evaluate(expr->right));
    }
    if (expr->value) {
        node->value = strdup(expr->value);
    }
    
    return node;
}
```

### 4.4 Generación de Reportes
```c
void generate_simple_ast(InstruccionList *list) {
    FILE *file = fopen("reports/ast.dot", "w");
    fprintf(file, "digraph AST {\n");
    fprintf(file, "node [shape=box, style=filled, fillcolor=lightblue];\n");
    
    InstruccionNode *current = list->head;
    while (current) {
        ASTVal *node = ast_execute(current->instr);
        print_ast_node(file, node);
        current = current->next;
    }
    
    fprintf(file, "}\n");
    fclose(file);
    
    // Generar imagen PNG con Graphviz
    system("dot -Tpng reports/ast.dot -o reports/ast.png");
}
```

---

## 5. Módulo Semántico (Análisis Semántico)

### 5.1 Archivos Principales
- `src/parser/semantic/semantic.h` - Definiciones y enums
- `src/parser/semantic/semantic.c` - Coordinador principal
- `src/parser/semantic/execute.c` - Ejecución de instrucciones
- `src/parser/semantic/evaluate.c` - Evaluación de expresiones
- `src/parser/semantic/utils.c` - Utilidades semánticas

### 5.2 Tipos de Datos Semánticos
```c
typedef enum {
    TYPE_CHARACTER = 0,
    TYPE_INTEGER = 1,
    TYPE_FLOAT = 2,
    TYPE_DOUBLE = 3,
    TYPE_STRING = 4,
    TYPE_NULL = 5,
    TYPE_UNDEFINED = 6
} OperativeType;

typedef enum ExecuteType {
    DECLARATION,
    ASSIGNMENT,
    EXP_PRINTLN,
    IF_STATEMENT,
    SWITCH_STATEMENT,
    WHILE_STATEMENT,
    FOR_STATEMENT,
    FOREACH_STATEMENT,
    BREAK_STATEMENT,
    CONTINUE_STATEMENT,
    RETURN_STATEMENT,
    VOID_CALL,
    BLOCK_STATEMENT,
    UNKNOWN
} ExecuteType;
```

### 5.3 Análisis Principal
```c
void semantic_analysis() {
    extern InstruccionList *list_tokens;
    extern symbol_table *SymbolTable_General;
    
    // Inicializar contexto global
    Context *contextGlobal = malloc(sizeof(Context));
    contextGlobal->nombre = "Global";
    contextGlobal->symbols_context = Symbol_table_create();
    
    // Generar AST
    generate_simple_ast(list_tokens);
    
    // Ejecutar análisis semántico
    InstruccionNode *curr = list_tokens->head;
    while (curr) {
        semantic_analysis_execute(curr->instr, contextGlobal);
        curr = curr->next;
    }
    
    // Actualizar tabla de símbolos global
    Symbol_table_insertContext(SymbolTable_General, contextGlobal->symbols_context);
}
```

### 5.4 Ejecución de Instrucciones
```c
void semantic_analysis_execute(Instruccion *instruction, Context *context) {
    if (!instruction) return;
    
    ExecuteType type = get_instruction_type(instruction->type);
    
    switch (type) {
        case DECLARATION:
            execute_declaration(instruction, context);
            break;
        case ASSIGNMENT:
            execute_assignment(instruction, context);
            break;
        case EXP_PRINTLN:
            execute_println(instruction, context);
            break;
        case IF_STATEMENT:
            execute_if_statement(instruction, context);
            break;
        // ... más casos
    }
}
```

### 5.5 Evaluación de Expresiones
```c
symbol *evaluate_expression(Expression *expr, Context *context) {
    if (!expr) return create_null_symbol();
    
    ExpressionType type = get_expression_type(expr->type);
    
    switch (type) {
        case EXP_INTEGER:
            return create_integer_symbol(atoi(expr->value));
        case EXP_FLOAT:
            return create_float_symbol(atof(expr->value));
        case EXP_STRING:
            return create_string_symbol(process_escape_sequences(expr->value));
        case EXP_SUM:
            return perform_arithmetic_operation(expr->left, expr->right, context, '+');
        case EXP_ID:
            return Symbol_table_getSymbol(context->symbols_context, expr->value);
        // ... más casos
    }
    
    return create_null_symbol();
}
```

### 5.6 Tabla de Símbolos
```c
typedef struct symbol {
    char *id;
    char *type;
    char *value;
    int line;
    int column;
    char *environment;
    bool is_mutable;
} symbol;

typedef struct symbol_table {
    symbol_node *head;
} symbol_table;
```

---

## 6. Módulo GUI (Interfaz Gráfica)

### 6.1 Tecnología: GTK+ 3.0
El módulo GUI utiliza GTK+ 3.0 para proporcionar una interfaz gráfica completa.

### 6.2 Archivos Principales
```text
src/UI/
├── UI.h                     # Definiciones y estructuras
├── UI.c                     # Funciones principales
├── main_window.c           # Ventana principal
├── menu.c                  # Barra de menú
├── toolbar.c               # Barra de herramientas
├── editor.c                # Editor de código
├── console.c               # Consola de salida
├── reports.c               # Panel de reportes
└── styles.c                # Estilos CSS
```

### 6.3 Estructura Principal de Widgets
```c
typedef struct {
    GtkWidget *window;
    GtkWidget *right_paned;
    GtkWidget *text_editor;
    GtkWidget *text_view;
    GtkWidget *console_view;
    GtkWidget *ast_view;
    GtkWidget *symbols_view;
    GtkWidget *errors_view;
    GtkWidget *status_bar;
    GtkListStore *symbols_store;
    GtkListStore *errors_store;
} AppWidgets;

extern AppWidgets *global_widgets;
```

### 6.4 Ventana Principal
```c
void create_main_window(GtkApplication *app, gpointer user_data) {
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "JavaLang IDE");
    gtk_window_set_default_size(GTK_WINDOW(window), 1400, 900);
    
    // Crear contenedor principal
    GtkWidget *main_vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_container_add(GTK_CONTAINER(window), main_vbox);
    
    // Agregar componentes
    gtk_box_pack_start(GTK_BOX(main_vbox), create_menubar(), FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(main_vbox), create_toolbar(), FALSE, FALSE, 0);
    
    // Panel principal dividido
    GtkWidget *main_paned = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_box_pack_start(GTK_BOX(main_vbox), main_paned, TRUE, TRUE, 0);
    
    // Editor de código (izquierda)
    GtkWidget *left_panel = create_code_editor(status_bar, &text_view);
    gtk_paned_add1(GTK_PANED(main_paned), left_panel);
    
    // Panel derecho dividido verticalmente
    GtkWidget *right_paned = gtk_paned_new(GTK_ORIENTATION_VERTICAL);
    gtk_paned_add2(GTK_PANED(main_paned), right_paned);
    
    // Consola (arriba derecha)
    gtk_paned_add1(GTK_PANED(right_paned), create_console(&console_view));
    
    // Reportes (abajo derecha)
    gtk_paned_add2(GTK_PANED(right_paned), create_reports_panel());
    
    gtk_widget_show_all(window);
}
```

### 6.5 Editor de Código
```c
GtkWidget *create_code_editor(GtkWidget *status_bar, GtkWidget **out_text_view) {
    GtkWidget *scrolled = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled),
                                   GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    
    GtkWidget *text_view = gtk_text_view_new();
    gtk_text_view_set_monospace(GTK_TEXT_VIEW(text_view), TRUE);
    gtk_text_view_set_show_line_numbers(GTK_TEXT_VIEW(text_view), TRUE);
    
    // Configurar buffer
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(text_view));
    
    // Conectar señales para actualizar posición del cursor
    g_signal_connect(buffer, "notify::cursor-position",
                     G_CALLBACK(update_cursor_position), status_bar);
    
    gtk_container_add(GTK_CONTAINER(scrolled), text_view);
    
    if (out_text_view) *out_text_view = text_view;
    return scrolled;
}
```

### 6.6 Toolbar con Funcionalidades
```c
GtkWidget *create_toolbar() {
    GtkWidget *toolbar = gtk_toolbar_new();
    gtk_toolbar_set_style(GTK_TOOLBAR(toolbar), GTK_TOOLBAR_BOTH);
    
    // Botón Nuevo
    GtkToolItem *new_button = gtk_tool_button_new(
        gtk_image_new_from_icon_name("document-new", GTK_ICON_SIZE_LARGE_TOOLBAR),
        "Nuevo"
    );
    g_signal_connect(new_button, "clicked", G_CALLBACK(on_new_clicked), NULL);
    gtk_toolbar_insert(GTK_TOOLBAR(toolbar), new_button, -1);
    
    // Botón Abrir
    GtkToolItem *open_button = gtk_tool_button_new(
        gtk_image_new_from_icon_name("document-open", GTK_ICON_SIZE_LARGE_TOOLBAR),
        "Abrir"
    );
    g_signal_connect(open_button, "clicked", G_CALLBACK(on_open_clicked), NULL);
    gtk_toolbar_insert(GTK_TOOLBAR(toolbar), open_button, -1);
    
    // Botón Ejecutar
    GtkToolItem *run_button = gtk_tool_button_new(
        gtk_image_new_from_icon_name("media-playback-start", GTK_ICON_SIZE_LARGE_TOOLBAR),
        "Ejecutar"
    );
    g_signal_connect(run_button, "clicked", G_CALLBACK(on_run_clicked), NULL);
    gtk_toolbar_insert(GTK_TOOLBAR(toolbar), run_button, -1);
    
    return toolbar;
}
```

### 6.7 Callback de Ejecución
```c
void on_run_clicked(GtkToolButton *button, gpointer user_data) {
    // Obtener código del editor
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(global_widgets->text_view));
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    char *source_code = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);
    
    if (!source_code || strlen(source_code) == 0) return;
    
    // Crear archivo temporal
    char temp_filename[] = "/tmp/javalang_temp_XXXXXX";
    int temp_fd = mkstemp(temp_filename);
    
    if (temp_fd != -1) {
        write(temp_fd, source_code, strlen(source_code));
        close(temp_fd);
        
        // Ejecutar parser
        FILE *temp_file = fopen(temp_filename, "r");
        yyin = temp_file;
        
        // Limpiar estructuras anteriores
        InstruccionList_clear(list_tokens);
        ErrorList_clear(list_errors);
        Symbol_table_destroy(SymbolTable_General);
        SymbolTable_General = Symbol_table_create();
        
        // Ejecutar análisis
        int parse_result = yyparse();
        semantic_analysis();
        
        // Actualizar GUI
        update_symbols_table_safe(global_widgets->symbols_store, SymbolTable_General);
        update_errors_table_safe(global_widgets->errors_store, list_errors);
        update_ast_report();
        
        fclose(temp_file);
    }
    
    g_free(source_code);
}
```

### 6.8 Panel de Reportes
```c
GtkWidget *create_reports_panel() {
    GtkWidget *notebook = gtk_notebook_new();
    
    // Tab AST
    GtkWidget *ast_scrolled = gtk_scrolled_window_new(NULL, NULL);
    GtkWidget *ast_image = gtk_image_new();
    gtk_container_add(GTK_CONTAINER(ast_scrolled), ast_image);
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), ast_scrolled, gtk_label_new("AST"));
    
    // Tab Tabla de Símbolos
    GtkListStore *symbols_store = gtk_list_store_new(7,
        G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,
        G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING
    );
    GtkWidget *symbols_view = gtk_tree_view_new_with_model(GTK_TREE_MODEL(symbols_store));
    
    // Agregar columnas
    add_column(symbols_view, "ID", 0);
    add_column(symbols_view, "Tipo", 1);
    add_column(symbols_view, "Valor", 2);
    add_column(symbols_view, "Línea", 3);
    add_column(symbols_view, "Columna", 4);
    add_column(symbols_view, "Entorno", 5);
    add_column(symbols_view, "Mutable", 6);
    
    GtkWidget *symbols_scrolled = gtk_scrolled_window_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER(symbols_scrolled), symbols_view);
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), symbols_scrolled, gtk_label_new("Símbolos"));
    
    // Tab Errores
    GtkListStore *errors_store = gtk_list_store_new(4,
        G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING
    );
    GtkWidget *errors_view = gtk_tree_view_new_with_model(GTK_TREE_MODEL(errors_store));
    
    // ... configuración similar
    
    return notebook;
}
```

---

## 7. Integración de Módulos

### 7.1 Flujo Principal
```c
int main(int argc, char *argv[]) {
    // Inicializar estructuras globales
    list_tokens = InstruccionList_create();
    list_errors = createErrorList();
    SymbolTable_General = Symbol_table_create();
    
    printf("Iniciando la interfaz de usuario...\n");
    
    return launch_terminal_ui(argc, argv);
}
```

### 7.2 Proceso de Compilación/Ejecución
1. **Input**: Usuario escribe código en el editor
2. **Lexer**: `lexer.l` tokeniza el código fuente
3. **Parser**: `parser.y` construye el AST
4. **Semántico**: Análisis semántico y ejecución
5. **Reportes**: Generación de AST visual y tablas
6. **GUI**: Actualización de la interfaz con resultados

### 7.3 Comunicación entre Módulos
```c
// Variables globales compartidas
extern InstruccionList *list_tokens;  // AST principal
extern ErrorList *list_errors;        // Lista de errores
extern symbol_table *SymbolTable_General; // Tabla de símbolos
extern AppWidgets *global_widgets;    // Widgets de la GUI
```

---

## 8. Estructuras de Datos

### 8.1 Instrucciones
```c
typedef struct Instruccion {
    char *type;           // Tipo de instrucción
    char *value1;         // Primer valor
    char *value2;         // Segundo valor
    char *value3;         // Tercer valor
    Expression *expr;     // Expresión asociada
    InstruccionList *list; // Lista de instrucciones anidadas
    int line;            // Línea en el código fuente
    int column;          // Columna en el código fuente
} Instruccion;

typedef struct InstruccionNode {
    Instruccion *instr;
    struct InstruccionNode *next;
} InstruccionNode;

typedef struct InstruccionList {
    InstruccionNode *head;
} InstruccionList;
```

### 8.2 Expresiones
```c
typedef struct Expression {
    char *type;              // Tipo de expresión
    char *value;             // Valor literal
    int line;                // Línea
    int column;              // Columna
    struct Expression *left; // Expresión izquierda
    struct Expression *right; // Expresión derecha
    struct ExpressionList *list; // Lista de expresiones
} Expression;
```

### 8.3 Símbolos
```c
typedef struct symbol {
    char *id;            // Identificador
    char *type;          // Tipo de dato
    char *value;         // Valor actual
    int line;            // Línea de declaración
    int column;          // Columna de declaración
    char *environment;   // Contexto/entorno
    bool is_mutable;     // ¿Es mutable?
} symbol;
```

### 8.4 Errores
```c
typedef struct Error {
    char *type;          // Tipo de error (Léxico, Sintáctico, Semántico)
    char *environment;   // Entorno donde ocurrió
    char *message;       // Mensaje del error
    int line;            // Línea del error
    int column;          // Columna del error
} Error;
```

---

## 9. Sistema de Compilación

### 9.1 Makefile Principal
```makefile
CC = gcc
FLEX = flex
BISON = bison
SRC = src
INC = include
BUILD = build

# Archivos principales
LEXER = $(SRC)/parser/lexer.l
PARSER = $(SRC)/parser/parser.y
MAIN = $(SRC)/main.c

# Módulos
UI_FILES = $(UI_DIR)/UI.c $(UI_DIR)/menu.c $(UI_DIR)/toolbar.c \
           $(UI_DIR)/editor.c $(UI_DIR)/console.c $(UI_DIR)/reports.c \
           $(UI_DIR)/styles.c $(UI_DIR)/main_window.c

PARSER_FILES = $(PARSER_DIR)/semantic.c $(PARSER_DIR)/execute.c \
               $(PARSER_DIR)/evaluate.c $(PARSER_DIR)/utils.c

STRUCTURES_FILES = $(STRUCTURES_DIR)/Instruction.c $(STRUCTURES_DIR)/Errors.c \
                   $(STRUCTURES_DIR)/SymbolTable.c

REPORTS_FILES = $(REPORTS_DIR)/ast_generator.c $(REPORTS_DIR)/ast_execute.c \
                $(REPORTS_DIR)/utils.c $(REPORTS_DIR)/ast_evaluate.c

# Compilación principal
all: $(BUILD)/parser.tab.c $(BUILD)/lexer.yy.c
	$(CC) -I$(INC) -I$(UI_DIR) $(WARNINGS) \
	$(BUILD)/parser.tab.c $(BUILD)/lexer.yy.c $(MAIN) \
	$(UI_FILES) $(REPORTS_FILES) $(STRUCTURES_FILES) $(PARSER_FILES) \
	-o $(BUILD)/main $(GTK_FLAGS) -luuid -lm

# Generación de parser y lexer
$(BUILD)/parser.tab.c $(BUILD)/parser.tab.h: $(PARSER)
	$(BISON) -d -o $(BUILD)/parser.tab.c $(PARSER)
	cp $(BUILD)/parser.tab.h $(INC)/parser.tab.h

$(BUILD)/lexer.yy.c: $(LEXER)
	$(FLEX) -o $(BUILD)/lexer.yy.c $(LEXER)
```

### 9.2 Dependencias
```text
# Bibliotecas del sistema
- GTK+ 3.0: Interfaz gráfica
- Flex: Generador de analizadores léxicos
- Bison: Generador de analizadores sintácticos
- GCC: Compilador de C
- Graphviz: Generación de diagramas AST
- libuuid: Generación de IDs únicos

# Instalación en Ubuntu/Debian
sudo apt-get install build-essential flex bison libgtk-3-dev \
                     graphviz uuid-dev
```

### 9.3 Compilación y Ejecución
```bash
# Compilación normal
make

# Compilación con debug
make -f makeDebug debug

# Ejecución
./build/main

# Limpieza
make clean
```

---

## Conclusiones

Esta implementación modular del compilador JavaLang demuestra:

1. **Separación de responsabilidades**: Cada módulo tiene una función específica
2. **Reutilización**: Estructuras de datos compartidas entre módulos  
3. **Extensibilidad**: Fácil agregar nuevas funcionalidades
4. **Mantenibilidad**: Código organizado y bien documentado
5. **Interfaz amigable**: GUI completa con GTK+

El diseño permite desarrollo independiente de cada módulo mientras mantiene la integración necesaria para el funcionamiento completo del compilador.

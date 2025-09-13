#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef TOKEN_LIST_H
#define TOKEN_LIST_H

typedef struct ListData ListData;
typedef struct ListNode ListNode;
typedef struct List List;
typedef struct SymbolList SymbolList;
typedef struct VectorList VectorList;
typedef struct MatrixList MatrixList;

//* Tabla de simbolos

typedef struct symbol
{
    //* El tipo de dato que es
    char *dataType;

    //* Variables, constantes, etc.
    char *type;
    char *subType;
    char *environment;
    char *value;
    char *id;
    List *arrayValues;        // Para muldimensionales
    VectorList *vectorValues; // Para vectores
    MatrixList *matrixValues; // Para matrices
    int dimensions;           // Numero de dimensiones del arreglo

    int *line;
    int *column;
} symbol;

typedef struct symbol_node
{
    symbol *data;
    struct symbol_node *next;
} symbol_node;

typedef struct symbol_table
{
    symbol_node *head;
} symbol_table;

//* Contexto

typedef struct Context
{
    char *nombre;
    struct Context *after;
    struct symbol_table *symbols_context;
    bool continue_instruction;
    bool break_instruction;
    char *return_type;
    char *return_value;

} Context;

// * Tabla de errores

typedef struct Error
{
    char *type;
    char *environment;
    char *message;
    int line;
    int column;
} Error;

typedef struct ErrorNode
{
    Error *Error;
    struct ErrorNode *next;
} ErrorNode;

typedef struct ErrorList
{
    ErrorNode *head;
} ErrorList;

// * Manejo de Tokens

typedef struct Expression
{
    char *type;
    char *value;
    int line;
    int column;
    struct Expression *left;
    struct Expression *right;
} Expression;

// Forward declarations
typedef struct InstruccionList InstruccionList;
typedef struct IfNodeList IfNodeList;
typedef struct IfData IfData;
typedef struct ForData ForData;
typedef struct WhileData
{
    Expression *condition;
    InstruccionList *block;
} WhileData;

typedef struct SwitchData SwitchData;

typedef struct Instruccion
{
    char *InstType;
    char *symbolType;
    char *type;
    char *id;
    IfData *ifData;
    SwitchData *switchData;
    WhileData *whileData;
    ForData *forData;
    SymbolList *arrayValues;  // Para arreglos
    VectorList *vectorValues; // Para vectores
    MatrixList *matrixValues; // Para matrices
    Expression *IndexVector;  // Para acceso a vectores
    Expression *IndexMatrix;  // Para acceso a matrices
    int line;
    int column;
    Expression *value;
} Instruccion;

typedef struct InstruccionNode
{
    Instruccion *instr;
    struct InstruccionNode *next;
} InstruccionNode;

struct InstruccionList
{
    InstruccionNode *head;
};

struct ForData
{
    Instruccion *init;
    Expression *condition;
    Instruccion *update;
    InstruccionList *block;
};

// * -- Estructuras para ifs --

struct IfData
{
    Expression *condition;
    InstruccionList *block;
    InstruccionList *elseBlock;
    IfNodeList *elseIfs;
};

typedef struct IfNode
{
    struct IfNode *next;
    IfData *IfData;
} IfNode;

struct IfNodeList
{
    IfNode *head;
};

typedef struct CaseNodeList CaseNodeList;

struct SwitchData
{
    char *condition;
    CaseNodeList *cases;
    InstruccionList *defaultCase;
};

typedef struct CaseData
{
    Expression *condition;
    InstruccionList *block;
} CaseData;

typedef struct CaseNode
{
    struct CaseNode *next;
    CaseData *caseData;
} CaseNode;

struct CaseNodeList
{
    CaseNode *head;
};

//* Estrucutra para listas genericas
struct ListData
{
    Expression *exprData;
    List *listData;
};

struct ListNode
{
    struct ListNode *next;
    ListData *listData;
};

struct List
{
    ListNode *head;
};

struct SymbolList
{
    int dimension;
    List *values;
};

typedef struct VectorNode
{
    struct VectorNode *next;
    symbol *value;
    Expression *exprData;
} VectorNode;

struct VectorList
{
    VectorNode *head;
};

typedef struct matrixNode
{
    struct matrixNode *next;
    VectorList *vector;
} matrixNode;

struct MatrixList
{
    matrixNode *head;
};

// * --- Estructura ASTNode y lista de hijos ---

typedef struct ASTNode ASTNode;

typedef struct ASTNodeList
{
    ASTNode *node;
    struct ASTNodeList *next;
} ASTNodeList;

struct ASTNode
{
    char *id;
    char *label;
    ASTNodeList *children;
};

//* Prototipos de funciones
InstruccionList *InstruccionList_create();
void InstruccionList_print(InstruccionList *list);
void InstruccionList_insert(InstruccionList *list, Instruccion *instr);
InstruccionList *InstruccionList_add(InstruccionList *list, Instruccion *instr);
void InstruccionList_destroy(InstruccionList *list);

void ASTNode_addChild(ASTNode *parent, ASTNode *child);
void ASTNode_destroy(ASTNode *node);

ErrorList *createErrorList();
void ErrorList_destroy(ErrorList *list);
void insertError(ErrorList *list, Error *error);

symbol_table *Symbol_table_create();
void Symbol_table_destroy(symbol_table *table);
void Symbol_table_insert(symbol_table *table, symbol *sym);
void Symbol_table_insertContext(symbol_table *global_table, symbol_table *new_context);
bool SearchID(symbol_table *table, char *id);
symbol *SearchSymbol(symbol_table *table, char *id);

IfNodeList *createIfNodeList();
void insertIfNode(IfNodeList *list, IfData *IfData);
void IfNodeList_destroy(IfNodeList *list);

CaseNodeList *CaseNodeList_create();
void CaseNodeList_add(CaseNodeList *list, CaseData *caseData);

List *List_create();
void List_add(List *list, ListData *listData);
void List_destroy(List *list);

VectorList *VectorList_create();
void VectorList_addExp(VectorList *list, Expression *exprData);
void VectorList_addSym(VectorList *list, symbol *sym);

MatrixList *MatrixList_create();
void MatrixList_add(MatrixList *matrix, VectorList *vectorList);

#endif // PARSER_H
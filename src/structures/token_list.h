#include <stdlib.h>

// --- Estructura Instruccion ---
typedef struct Instruccion
{
    char *type;
    char *id;
    char *dataType;
    int line;
    int column;
    struct Instruccion *left;
    struct Instruccion *right;
    struct Instruccion *value;
} Instruccion;

typedef struct InstruccionNode
{
    Instruccion *instr;
    struct InstruccionNode *next;
} InstruccionNode;

typedef struct InstruccionList
{
    InstruccionNode *head;
} InstruccionList;

// --- Estructura ASTNode y lista de hijos ---
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

// Prototipos de funciones
InstruccionList *InstruccionList_create();
void InstruccionList_insert(InstruccionList *list, Instruccion *instr);
void InstruccionList_destroy(InstruccionList *list);

void ASTNode_addChild(ASTNode *parent, ASTNode *child);
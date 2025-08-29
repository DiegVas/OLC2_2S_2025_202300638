#include "../structures/parser.h"
#include "semantic.h"
#include <string.h>

void semantic_analysis_execute(Instruccion *instruction, Context *context)
{
    // Implementa el análisis semántico para la instrucción dada en el contexto proporcionado
    if (strcmp(instruction->type, "DECLARATION") == 0)
    {
        fprintf(stderr, "Context: %s\n", context->nombre);
        fprintf(stderr, "Executing semantic analysis for instruction: %s\n", instruction->type);
        fprintf(stderr, "ID: %s, Value: %s, DataType: %s, Column: %d\n",
                instruction->id, instruction->value->value, instruction->dataType, instruction->column);
    }
    else if (strcmp(instruction->type, "ASSIGNMENT") == 0)
    {
        // código para asignación
    }
    else
    {
        // otro caso
    }
}

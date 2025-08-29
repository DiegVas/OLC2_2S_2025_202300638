
#include <stdio.h>
#include "UI/UI.h"
#include "../structures/parser.h"

InstruccionList *list_tokens = NULL; // Definición global
ErrorList *list_errors = NULL;       // Definición global

int main(int argc, char *argv[])
{

    list_tokens = InstruccionList_create();
    list_errors = createErrorList();
    printf("Iniciando la interfaz de usuario...\n");

    return launch_terminal_ui(argc, argv);
}

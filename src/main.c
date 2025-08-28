
#include <stdio.h>
#include "UI/UI.h"
#include "../structures/token_list.h"

int main(int argc, char *argv[])
{

    InstruccionList *list_tokens = InstruccionList_create();
    printf("Iniciando la interfaz de usuario...\n");

    return launch_terminal_ui(argc, argv);
}

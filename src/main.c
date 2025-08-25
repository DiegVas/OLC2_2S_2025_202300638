
#include <stdio.h>
#include "UI/UI.h"

// Función requerida por el parser de Bison
int yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    return 0;
}

int main(int argc, char *argv[]) {
    return launch_terminal_ui(argc, argv);
}

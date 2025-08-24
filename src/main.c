// ...existing code...
#include <stdio.h>

int main(int argc, char *argv[]) {
    extern void launch_ui(int argc, char *argv[]);
    launch_ui(argc, argv);
    return 0;
}

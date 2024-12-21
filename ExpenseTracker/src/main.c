#include "main.h"

int main(int argc, char **argv){
    gtk_init(&argc, &argv);

    init__();

    gtk_main();
    return 0;
}
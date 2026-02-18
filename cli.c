#include <stdio.h>
#include "defines/calculator_defines.h"

void cli_banner(char *text) {
    printf("%s", text);
}

int call() {
    char text[22] = "\nADVANCED CALCULATOR\n";
    cli_banner(text);
    return 0;
}
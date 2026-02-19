#include <stdio.h>
#include "defines/calculator_defines.h"
#include "defines/color_defines.h"

void cli_banner(char *text) {
    printf("%s", text);
}

int call() {
    char text[28] = AC_BLUE"\nADVANCED CALCULATOR\n"; 
    cli_banner(text);
    printf(AC_NORMAL);
    return 0;
}
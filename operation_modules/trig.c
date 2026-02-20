#include <stdio.h>
#include <math.h>
#include "../defines/color_defines.h"
#include <string.h>

double calc_trig(double number, char *op) {
    if (strcmp(op, "sin") == 0) { return sin(number); }
    else if (strcmp(op, "cos") == 0) { return cos(number); }
    else if (strcmp(op, "tan") == 0) { return tan(number); }
    else { printf("%s", op); fprintf(stderr, AC_RED"[ERROR] The operation that you're entered, is not defined"); return 0; }
}
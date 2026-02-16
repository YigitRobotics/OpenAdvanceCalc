#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int operate_basics(void *num1, void *num2, char op) {
    if (op == 'a') { return *(int*)num1 + *(int*)num2; } // add
    if (op == 's') { return *(int*)num1 - *(int*)num2; } // subtract
    if (op == 'd') { // divide
        if (*(int*)num2 == 0) { // division by zero protection!
            fprintf(stderr, "Division by zero detected! \n");
            return 0;
        }
        return *(int*)num1 / *(int*)num2;
    }
    if (op == 'm') { return *(int*)num1 * *(int*)num2; } // multiply

    fprintf(stderr, "[error] Undefined operation");
    return 0;
}

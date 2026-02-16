#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int operate_basics(void *num1, void *num2, char op) {
    if (op == 't') { return *(int*)num1 + *(int*)num2; }
    if (op == 'c') { return *(int*)num1 - *(int*)num2; }
    if (op == 'b') { 
        if (*(int*)num2 == 0) {
            fprintf(stderr, "Division by zero detected! \n");
            return 0;
        }
        return *(int*)num1 / *(int*)num2;
    }
    if (op == 'm') { return *(int*)num1 * *(int*)num2; }

    fprintf(stderr, "[error] Undefined operation");
    return 0;
}

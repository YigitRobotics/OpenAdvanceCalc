#include <stdio.h>
#include "operation_modules/basic_calculator.c"
#include "operation_modules/trig.c"
#include <string.h>
#include "defines/color_defines.h"
#include "cli.c"
#include <string.h>
#include "operation_modules/sqrt.c"

const char *array[5] = {"Program is starting","\nHello"}; // you can customize what you want

void for_basics_user_input() {
    int numin1;
    int numin2;
    char operation;

    printf("Enter first number: ");
    scanf("%10d", &numin1);
    printf("Enter second number: ");
    scanf("%10d", &numin2);
    printf("Enter operation (a/s/m/d): ");
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    scanf("%c", &operation);

    printf("%d", operate_basics(&numin1, &numin2, operation));
}

void for_sqrt_input() {
    double l_dInputnum;
    printf("Enter a number > ");
    scanf("%lf", &l_dInputnum);
    printf("%lf", calc_sqrt(l_dInputnum));
}

void for_trig_input() {
    double l_dInputnum;
    char op[4]; // sin/cos/tan + \0 (null-terminator)
    printf("Enter a value > ");
    scanf("%lf", &l_dInputnum);
    while(getchar() != '\n');
    printf("Enter operation (sin/cos/tan): ");
    fgets(op, sizeof(op), stdin);

    op[strcspn(op, "\n")] = '\0';

    printf("%lf", calc_trig(l_dInputnum, op));
}

void main_user_input() {
    while (1) {
        printf(AC_GREEN "\nPlease select main operation > "AC_NORMAL);
        char operation[30];
        scanf("%29s", operation);
        if (strcmp(operation, "help") == 0) { printf("\ntrig/basics/sqrt/science/exit"); continue; }
        else if (strcmp(operation, "trig") == 0) { for_trig_input(); }
        else if (strcmp(operation, "basics") == 0) { for_basics_user_input(); continue;}
        else if (strcmp(operation, "sqrt") == 0) { for_sqrt_input(); continue; }
        else if (strcmp(operation, "science") == 0) { break; }
        else if (strcmp(operation, "exit") == 0) { exit(0); }
        else { break; }
    };
}

int main() {
    call();
    printf("%s", array[0]);
    printf("%s", array[1]);

    main_user_input();
    return 0;
}
#include <stdio.h>
#include "operation_modules/basic_calculator.c"
#include "operation_modules/trig.c"
#include <stdlib.h>

const char *array[5] = {"Program is starting","\nHello"}; // you can customize what you want

void for_basics_user_input() {
    int numin1;
    int numin2;
    char operation;

    printf("Enter first number: ");
    scanf("%10d", &numin1);
    printf("Enter second number: ");
    scanf("%10d", &numin2);
    printf("Enter operation (t/c/b/m): ");
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    scanf("%c", &operation);

    printf("%d", operate_basics(&numin1, &numin2, operation));
}

void main_user_input() {
    while (1) {
        printf("\nPlease select main operation > ");
        char *operation = malloc(30);
        scanf("%29s", operation);
        if (strcmp(operation, "help") == 0) { printf("\ntrig/basics/sqrt"); free(operation); continue; }
        else if (strcmp(operation, "trig") == 0) { free(operation); break; }
        else { free(operation); }
    };
}

int main() {
    printf("%s", array[0]);
    printf("%s", array[1]);

    main_user_input();
    return 0;
}
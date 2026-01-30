// C program to make a simple calculator with + - * /
#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}

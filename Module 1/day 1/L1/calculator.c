#include <stdio.h>

int main() {
    char operator;
    double operand1, operand2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &operand1, &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}

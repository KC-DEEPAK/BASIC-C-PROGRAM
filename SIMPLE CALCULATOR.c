#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter the value of num1 and num2:\n");
    scanf("%d %d", &num1, &num2);

    printf("Welcome to the simple calculator.\n");
    printf("Choose an operator (+, -, *, /):\n");
    scanf(" %c", &operator);  // Added space to consume any leftover newline

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The sum is: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference is: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product is: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The division is: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}

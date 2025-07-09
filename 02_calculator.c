#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Ask user for operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to consume newline

    // Ask for two numbers
    printf("Enter number 1: ");

    scanf("%f", &num1);

 printf("Enter number 2: ");

    scanf("%f", &num2);



    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    // Display result
    printf("Result: %f\n", result);

    return 0;
}

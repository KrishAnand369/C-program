// Write a C program that uses functions to evaluate a simple arithmetic expression given two numbers and an operator.
// Description: The program should prompt the user to enter two floating-point numbers and an arithmetic operator (+, -, *, /).
//  A separate function must be written for each operation (add, subtract, multiply, divide).
//  A selector function should take the operator as a parameter and call the appropriate function, returning the result to main. 
// Division by zero must be handled gracefully inside the divide function.
// Pre-requisites: Functions, Switch/Conditionals, Float Arithmetic, Error Handling.

#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b, int *error) {
    if (b == 0) {
        *error = 1;
        return 0;
    }
    *error = 0;
    return a / b;
}

float calculate(float a, float b, char op, int *error) {
    *error = 0;
    switch (op) {
        case '+':
            return add(a, b);
        case '-':
            return subtract(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b, error);
        default:
            *error = 2; // invalid operator
            return 0;
    }
}

int main() {
    float num1, num2, result;
    char op;
    int error = 0;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);

    result = calculate(num1, num2, op, &error);

    if (error == 1) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (error == 2) {
        printf("Error: Invalid operator.\n");
    } else {
        printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
    }

    return 0;
}

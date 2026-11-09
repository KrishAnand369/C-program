// Write a C program that takes a positive integer from the user and calculates its
// factorial.
// Description: The program should prompt the user to enter a single whole number. It
// must then calculate the factorial of that number, which is the product of all positive
// integers from 1 up to the number entered. The final result should be displayed clearly
// on the screen. The program should also account for the fact that the factorial of 0 is
// Pre-requisites: Operators, Data Types, Loops.

#include <stdio.h>
int main() {
    int num, i;
    unsigned long factorial = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) 
        printf("Factorial is not defined for negative numbers.\n");
    else if (num == 0) 
        printf("Factorial of 0 = 1\n");
    else {
        for (i = 1; i <= num; ++i) {
            factorial *= i; // Calculate factorial
        }
        printf("Factorial of %d = %lu\n", num, factorial);
    }

    return 0;
}
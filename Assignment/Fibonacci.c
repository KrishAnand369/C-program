// Write a C program to generate the Fibonacci series up to a given number of terms.
// Description: The program should prompt the user to enter the number of terms (n). It
// should then generate the Fibonacci sequence, where each number is the sum of the
// two preceding ones, starting from 0 and 1. The program must display the sequence up
// to the specified number of terms.
// Pre-requisites: Loops, Variables, Basic Arithmetic Operations

#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Calculate the next term
            first = second; // Update first to the previous second
            second = next; // Update second to the new term
        }
        printf("%d ", next); // Print the current term
    }

    printf("\n");
    return 0;
}
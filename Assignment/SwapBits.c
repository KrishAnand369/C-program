// Write a C program that takes two integers and swaps n bits starting from a given
// position in both numbers.
// Description: The program should prompt the user to enter two integers, a starting
// bit position, and the number of bits (n) to be swapped. It must then exchange
// the n consecutive bits at the specified position between the two numbers — the
// bits from the first number go into the second, and vice versa — while all remaining
// bits in both numbers stay exactly as they were. Both final values should be displayed
// on the screen after the swap.
// Pre-requisites: Bitwise Operators, Loops, Assignment Operators.

#include <stdio.h>

int main() {
    int num1, num2, pos, n;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter starting bit position (0-indexed): ");
    scanf("%d", &pos);
    printf("Enter number of bits (n): ");
    scanf("%d", &n);

    // Create mask for n bits at position pos
    int mask = ((1 << n) - 1) << pos;

    // Extract n bits from both numbers
    int bits1 = num1 & mask;
    int bits2 = num2 & mask;

    // Clear n bits in both numbers and insert swapped bits
    num1 = (num1 & ~mask) | bits2;
    num2 = (num2 & ~mask) | bits1;

    printf("After swap:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

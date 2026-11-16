// Write a C program that uses functions to convert a decimal number to any base between 2 and 16.
// Description: The program should prompt the user to enter a decimal number and a target base. A separate function must be written that performs the repeated division method, stores each remainder, and builds the result in the correct order. For bases above 9, remainders 10–15 should be represented as letters A–F. The converted value should be displayed from the main function.
// Pre-requisites: Functions, Loops, Arrays, Character Handling.

#include <stdio.h>

void convertBase(int num, int base, char result[]) {
    char digits[] = "0123456789ABCDEF";
    char temp[50];
    int i = 0, j = 0;

    if (num == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    while (num > 0) {
        int rem = num % base;
        temp[i++] = digits[rem];
        num /= base;
    }

    // reverse into result array
    for (int k = i - 1; k >= 0; k--) {
        result[j++] = temp[k];
    }
    result[j] = '\0';
}

int main() {
    int num, base;
    char result[50];

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Enter target base (2-16): ");
    scanf("%d", &base);

    if (base < 2 || base > 16) {
        printf("Invalid base! Base must be between 2 and 16.\n");
        return 0;
    }

    convertBase(num, base, result);
    printf("Converted value: %s\n", result);

    return 0;
}

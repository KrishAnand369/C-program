// Write a C program that takes a string of digits from the user and converts it
// into its equivalent integer value.
// Description: The program should prompt the user to enter a number as a string
// (for example, 1234). It must then process this string character by character
// and transform it into an actual integer variable that can be used for mathematical
// operations. The program should be able to handle positive numbers and display
// the final integer result on the screen.
// Pre-requisites: Loops, Strings, Operators.

#include <stdio.h>

int main() {
    char str[50];
    int num = 0;

    printf("Enter a string of digits: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            printf("Invalid input! Contains non-digit characters.\n");
            return 0;
        }
    }

    printf("Converted integer: %d\n", num);
    printf("Result plus 10 (as test): %d\n", num + 10);

    return 0;
}

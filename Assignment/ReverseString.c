// Write a C program that takes a string from the user and reverses its characters
// using an iterative approach.
// Description: The program should prompt the user to enter a sequence of characters.
// It must then swap or move the characters within the string using a loop until the
// entire string is reversed. The final resulting string should be displayed on the screen.
// Pre-requisites: Loops, Strings. Operators.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

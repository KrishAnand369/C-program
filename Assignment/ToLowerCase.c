// Write a C program that takes a string from the user and converts all uppercase
// letters into their corresponding lowercase letters.
// Description: The program should prompt the user to enter a sequence of characters.
// It must then check each character individually. If a character is an uppercase
// letter, the program should convert it to its lowercase equivalent. If the character
// is already lowercase or is not a letter at all, the program should leave it exactly
// as it is. The final modified string should be displayed on the screen.
// Pre-requisites: Loops, Strings, Conditional Statements, ASCII.

#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }

    printf("Lowercase string: %s", str);

    return 0;
}

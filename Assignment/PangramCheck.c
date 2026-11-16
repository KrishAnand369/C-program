// Write a C program that takes a string input from the user and determines whether
// it is a pangram or not.
// Description: The program should prompt the user to enter a sentence or a string
// of characters. It must then verify if every letter of the alphabet from A to Z
// appears at least once within the provided text, regardless of whether the letters
// are uppercase or lowercase. The final output should state if the string is a pangram.
// Pre-requisites: Loops, Strings, Conditional Statements, ASCII, Operators

#include <stdio.h>

int main() {
    char str[200];
    int present[26] = {0};
    int isPangram = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            present[str[i] - 'a'] = 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            present[str[i] - 'A'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (present[i] == 0) {
            isPangram = 0;
            break;
        }
    }

    if (isPangram) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}

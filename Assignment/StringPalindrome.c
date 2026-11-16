// Write a C program that takes a string from the user and checks whether it is a palindrome.
// Description: The program should prompt the user to enter a string. It must determine
// if the string reads the same forward and backward. The program should then display
// a message to the user stating whether the input is a palindrome or not.
// Pre-requisites: Loops, Control Statements, Strings and Operators.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

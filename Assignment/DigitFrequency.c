// Write a C program that uses a function to count the frequency of each digit (0–9)
// in a given integer.
// Description: The program should prompt the user to enter an integer. A separate
// function must be written that takes the number, extracts each digit using a loop, and
// updates a frequency array accordingly. The function should not return a single value
// but instead update the array directly. The main function should then print how many
// times each digit appears in the number.
// Pre-requisites: Functions, Arrays, Loops, Pass by Reference (Pointers).

#include <stdio.h>

int findDigitFreq(unsigned long num, int freq[] ){

    int remainder=0;
    do
    {
        
        remainder = num%10;
        num /= 10;
        freq[remainder]++;
    } while (num>0);
    
    
}
int main(){
    unsigned long num;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%lu", &num);

    findDigitFreq( num, freq );
    printf("\nDigit Frequencies for %lu:\n", num);
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d time(s)\n", i, freq[i]);
    }

}
// You are given an 8-bit register represented as an unsigned char. 
// Write a function to:
//     ● Set the 3rd bit (bit index 2). 
//     ● Clear the 6th bit (bit index 5). 
//     ● Toggle the 1st bit (bit index 0). 
// Return the modified register value. 
// Note: Use bitwise operators only. Avoid loops or conditionals.


#include <stdio.h>
unsigned char modifyRegister(unsigned char reg){

    //  Set  3rd bit 
    reg |= (1 << 2); 

    // Clear 6th bit
    reg &= ~(1 << 5);

    // Toggle 1st bit
    reg ^= (1 << 0);

    return reg;
    
}
int main(){

    unsigned char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    
    printf("After modification : %c\n", modifyRegister(ch));
    return 0;
}
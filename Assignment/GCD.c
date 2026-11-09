// Write a C program that uses a recursive function to find the GCD of two
// numbers using the Euclidean algorithm.
// Description: The program should prompt the user to enter two positive integers. A
// recursive function must be written that repeatedly applies the Euclidean method
// replacing the larger number with the remainder of dividing the two until the
// remainder is zero. The GCD should be returned to the main function and displayed on
// the screen.
// Pre-requisites: Functions, Recursion, Modulus Operator.

#include <stdio.h>


int findGCD(int a , int b)
{
    int remainder = a%b;
    if (remainder == 0) 
        {
            return b;
        }
    
    findGCD(b,remainder);
    
}

int main(){

    int num1,num2;
    printf("Enter 1st positive integer: ");
    scanf("%d", &num1);
    printf("Enter 2nd positive integer: ");
    scanf("%d", &num2);

    printf("GCD of %d and %d : %d",num1,num2,findGCD(num1,num2));

    return 0;
}
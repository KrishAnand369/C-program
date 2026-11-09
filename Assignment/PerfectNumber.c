// Write a C program that uses a function to check whether a given number is a
// Perfect Number.
// Description: The program should prompt the user to enter a positive integer. A
// separate function must be written that computes the sum of all proper divisors of the
// number (excluding the number itself) and returns whether the sum equals the original
// number. The main function should display whether the number is perfect or not.
// (Example: 6 = 1+2+3, 28 = 1+2+4+7+14)
// Pre-requisites: Functions, Loops, Return Values.

#include <stdio.h>


int SumOfAllProperDivisors(int num){

    int sum =1; //all numbers are perfectly divisible by 1
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }

    return sum;

}

int main(){

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(SumOfAllProperDivisors(num)==num){
        printf(" The number is a Perfect Number");
    } else {
        printf(" The number is not a Perfect Number");
    }

    return 0;
}
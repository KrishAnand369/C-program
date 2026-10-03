// Write a C program to print a pyramid of stars for a given number n. 
// If n = 5, the output should be:
//     *
//    ***
//   *****
//  *******
// *********


#include <stdio.h>

void printStarPyramid(int n){
    for(int i=1; i<=n;i++){
        for(int j=0; j<n-i;j++){
            printf(" ");
        }
        for(int j=0; j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
 
}

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printStarPyramid(n);
    return 0;
}
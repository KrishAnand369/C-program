// Write a function in C that takes an array of integers and its size,
//  and returns the second largest element. 
// Constraints: 
//     ● Do not sort the array. 
//     ● Assume the array has at least two distinct elements.

#include <stdio.h>

int findSecondHighestNum(int size,int array[]){

        int highestNum ;
        int secondHighestNum;

        
        if(array[0]>array[1]){
            highestNum = array[0];
            secondHighestNum = array[1];
        }
        else{
            highestNum = array[1];
            secondHighestNum = array[0];
        }

        for(int i =2;i<size;i++){
            if(array[i]>highestNum){
                secondHighestNum = highestNum;
                highestNum= array[i];
            } else if(array[i]>secondHighestNum && array[i]<highestNum){
                secondHighestNum= array[i];
            }
        }

    return secondHighestNum;

}
int main(){

    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++){
        printf("Enter the %dth number to the array : ",i+1);
        scanf("%d",&array[i]);
    } 
    
    printf("Second Highest number is: %d",findSecondHighestNum(n,array));

}
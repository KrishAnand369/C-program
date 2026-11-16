// Write a C program to remove duplicate elements from a given array.
// Description: The program should prompt the user to enter the size of the array
// and its elements. It must then identify and remove any duplicate values,
// ensuring that each element appears only once in the resulting array. The program
// should finally display the updated array containing only unique elements.
// Pre-requisites: Arrays, Loops, Conditional Statements

#include <stdio.h>

int main() {
    int n, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left to overwrite the duplicate
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce size
                j--; // check the shifted element at same position
            }
        }
    }

    printf("Array with unique elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

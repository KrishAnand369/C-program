// Write a C program that merges two sorted arrays into a single sorted array without
// using any sorting function.
// Description: The program should prompt the user to enter the sizes and elements of
// two arrays, each already sorted in ascending order. It must then merge them into a
// third array by comparing elements from both arrays one by one and placing the
// smaller element first, continuing until all elements are placed. The final merged
// sorted array should be displayed on the screen.
// Pre-requisites: Arrays, Loops, Multiple Array Handling.

#include <stdio.h>

int main() {
    int n1, n2, a[100], b[100], c[200];
    int i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements for first array:\n", n1);
    for (int idx = 0; idx < n1; idx++) {
        scanf("%d", &a[idx]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements for second array:\n", n2);
    for (int idx = 0; idx < n2; idx++) {
        scanf("%d", &b[idx]);
    }

    // Merge both arrays
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while (i < n1) {
        c[k++] = a[i++];
    }
    while (j < n2) {
        c[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for (int idx = 0; idx < k; idx++) {
        printf("%d ", c[idx]);
    }
    printf("\n");

    return 0;
}

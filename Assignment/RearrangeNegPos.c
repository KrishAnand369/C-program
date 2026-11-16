// Write a C program that rearranges an array such that all negative numbers appear
// before all positive numbers while preserving the relative order of both groups.
// Description: The program should prompt the user to enter the size of the array and
// its elements (a mix of positive and negative integers). It must then rearrange the
// elements so that all negative numbers come first, followed by all positive numbers,
// without changing the order in which the negatives appear among themselves or the
// positives among themselves. Zero can be treated as positive. The rearranged array
// should be displayed on the screen.
// Pre-requisites: Arrays, Loops, Temporary Storage, Order Preservation Logic.

#include <stdio.h>

int main() {
    int n, arr[100], temp[100];
    int k = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Collect negative numbers first
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[k++] = arr[i];
        }
    }

    // Collect non-negative numbers (zero and positive)
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[k++] = arr[i];
        }
    }

    // Copy back into original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

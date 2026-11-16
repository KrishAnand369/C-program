// Write a C program that uses an array to find the second largest and second smallest
// element in a list of numbers.
// Description: The program should prompt the user to enter the size of the array
// and its elements. It must then scan through the array and determine both the
// second largest and second smallest values without sorting the array. The program
// should handle duplicate values correctly — if all elements are the same, it should
// display an appropriate message. Both results should be displayed on the screen.
// Pre-requisites: Arrays, Loops, Conditional Statements.

#include <stdio.h>

int main() {
    int n, arr[100];
    int first_min, second_min;
    int first_max, second_max;
    int found_sec_min = 0, found_sec_max = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least 2 elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first_min = arr[0];
    first_max = arr[0];

    // Find the smallest and largest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] < first_min) {
            first_min = arr[i];
        }
        if (arr[i] > first_max) {
            first_max = arr[i];
        }
    }

    // Find second smallest and second largest
    for (int i = 0; i < n; i++) {
        // For second smallest
        if (arr[i] > first_min) {
            if (!found_sec_min || arr[i] < second_min) {
                second_min = arr[i];
                found_sec_min = 1;
            }
        }
        // For second largest
        if (arr[i] < first_max) {
            if (!found_sec_max || arr[i] > second_max) {
                second_max = arr[i];
                found_sec_max = 1;
            }
        }
    }

    if (!found_sec_max && !found_sec_min) {
        printf("All elements are identical. Second largest and second smallest do not exist.\n");
    } else {
        if (found_sec_min) {
            printf("Second smallest element: %d\n", second_min);
        } else {
            printf("Second smallest element does not exist.\n");
        }

        if (found_sec_max) {
            printf("Second largest element: %d\n", second_max);
        } else {
            printf("Second largest element does not exist.\n");
        }
    }

    return 0;
}

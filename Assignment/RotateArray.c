// Write a C program that rotates the elements of an array by n positions in
// a specified direction.
// Description: The program should prompt the user to enter the array elements,
// the number of positions (n) to rotate, and the direction (left or right). It must
// then shift the elements accordingly — elements that fall off one end should reappear
// at the opposite end. The rotation must work for any value of n, including values
// larger than the array size. The final rotated array should be displayed on the screen.
// Pre-requisites: Arrays, Loops, Modulus Operator.

#include <stdio.h>

int main() {
    int size, k, arr[100], rotated[100];
    char direction;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    printf("Enter direction (L for left, R for right): ");
    scanf(" %c", &direction);

    // Normalize rotation count
    k = k % size;

    for (int i = 0; i < size; i++) {
        if (direction == 'L' || direction == 'l') {
            int newPos = (i - k + size) % size;
            rotated[newPos] = arr[i];
        } else if (direction == 'R' || direction == 'r') {
            int newPos = (i + k) % size;
            rotated[newPos] = arr[i];
        }
    }

    printf("Rotated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}

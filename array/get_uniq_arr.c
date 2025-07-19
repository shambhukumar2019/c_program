#include "stdio.h"

#define MAX_SIZE 9

void main(void)
{
    int arr[MAX_SIZE] = {0};
    int i = 0;
    int j = 0;

    printf("enter original array elements:\n");
    for (i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 1, 2, 3, 2, 5, 6, 7, 1, 9, 3
    // 1
    // Print the unique elements in the array

    for (i = 0; i < MAX_SIZE; i++) {
        for(j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                arr[i] = 0; // Exit the inner loop if a duplicate is found
            }
        }
    }
    // Print the unique elements
    printf("Unique elements: ");
    for (i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

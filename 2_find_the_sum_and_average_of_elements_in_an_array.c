#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    float average;

    printf("\nQ.2 : Write a program to find the sum and average of elements in an array?\n");

    // Calculate sum of elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / size;

    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}

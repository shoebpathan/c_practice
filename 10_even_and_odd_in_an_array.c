#include <stdio.h>

int main() {
    int size;
    printf("\nQ.10 : Write a program to count the number of even and odd elements in an array?\n");
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("\nEnter %d integers:", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of Even elements: %d\n", evenCount);
    printf("Number of Odd elements: %d\n", oddCount);

    return 0;
}
    
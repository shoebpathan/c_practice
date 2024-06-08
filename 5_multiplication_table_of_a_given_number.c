#include <stdio.h>

int main() {
    int number;
    printf("\nQ.5 : Write a program to print the multiplication table of a given number?\n");

    printf("\nEnter the number for multiplication table: ");
    scanf("%d", &number);

    printf("\nMultiplication table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

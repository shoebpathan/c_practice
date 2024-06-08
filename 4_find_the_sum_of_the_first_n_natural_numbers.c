#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("\nQ.4 : Write a program to find the sum of the first n natural numbers?\n");
    printf("\nEnter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("\nSum of the first %d natural numbers is %d.\n", n, sum);

    return 0;
}

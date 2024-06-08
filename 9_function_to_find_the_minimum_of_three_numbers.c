#include <stdio.h>

int min(int a, int b, int c) {

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    int num1, num2, num3;
    printf("\nQ.9 : Write a function to find the minimum of three numbers?\n");
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int minimum = min(num1, num2, num3);

    printf("Minimum of %d, %d, and %d is %d.\n", num1, num2, num3, minimum);

    return 0;
}

/*
 * Program 03: Sum of two numbers
 * Concept: scanf, arithmetic, printf
 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d + %d = %d\n", a, b, a + b);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}

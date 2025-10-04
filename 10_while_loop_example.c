/*
 * Program 10: While loop example (sum of digits)
 * Concept: while loop, modulus operator
 */
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) return 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}

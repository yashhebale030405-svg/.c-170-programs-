/*
 * Program 06: Factorial (iterative)
 * Concept: for loop, long long
 */
#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;
    printf("Enter n (0..20): ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 2; i <= n; ++i) fact *= i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}

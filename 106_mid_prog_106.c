/*
 * Program 106: Recursion - factorial
 * Concept: recursion
 */
#include <stdio.h>

unsigned long long fact(unsigned int n) {
    return n <= 1 ? 1 : n * fact(n-1);
}

int main() {
    unsigned int n;
    printf("Enter n (<=20): ");
    if (scanf("%u",&n)!=1) return 0;
    printf("%u! = %llu\n", n, fact(n));
    return 0;
}

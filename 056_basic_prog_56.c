/*
 * Program 056: Check prime (simple)
 * Concept: for loop, if-else
 */
#include <stdio.h>

int main() {
    int n; printf("Enter n: ");
    if (scanf("%d",&n)!=1) return 0;
    if (n<=1) { printf("%d is not prime\n", n); return 0; }
    int is_prime = 1;
    for (int i=2;i*i<=n;i++) if (n%i==0) { is_prime=0; break; }
    printf("%d is %sprime\n", n, is_prime? "" : "not ");
    return 0;
}

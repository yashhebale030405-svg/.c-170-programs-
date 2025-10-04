/*
 * Program 032: Reverse a number
 * Concept: while loop, arithmetic operations
 */
#include <stdio.h>

int main() {
    int n; printf("Enter n: ");
    if (scanf("%d",&n)!=1) return 0;
    int rev = 0;
    while (n != 0) {
        rev = rev*10 + n%10; n /= 10;
    }
    printf("Reversed = %d\n", rev);
    return 0;
}

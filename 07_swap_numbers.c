/*
 * Program 07: Swap two numbers without temp
 * Concept: arithmetic operations, input/output
 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers a b: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;
    printf("Before swap: a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a=%d b=%d\n", a, b);
    return 0;
}

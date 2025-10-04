/*
 * Program 107: Simple bitwise operations
 * Concept: bitwise AND, OR, XOR, shifts
 */
#include <stdio.h>

int main() {
    unsigned int a, b;
    printf("Enter two non-negative integers: ");
    if (scanf("%u %u",&a,&b)!=2) return 0;
    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);
    printf("a << 1 = %u, a >> 1 = %u\n", a<<1, a>>1);
    return 0;
}

/*
 * Program 08: Maximum of three numbers
 * Concept: nested if-else
 */
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Maximum = %d\n", max);
    return 0;
}

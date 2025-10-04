/*
 * Program 087: Pointer basics - swap using pointers
 * Concept: pointers, functions
 */
#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x; *x = *y; *y = t;
}

int main() {
    int a, b;
    printf("Enter a b: ");
    if (scanf("%d %d", &a, &b)!=2) return 0;
    printf("Before: %d %d\n", a, b);
    swap(&a, &b);
    printf("After: %d %d\n", a, b);
    return 0;
}

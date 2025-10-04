/*
 * Program 072: Sum of array elements
 * Concept: arrays, for loop, functions
 */
#include <stdio.h>

int main() {
    int n;
    printf("Number of elements: ");
    if (scanf("%d", &n)!=1) return 0;
    int a[n];
    for (int i=0;i<n;i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    long sum=0;
    for (int i=0;i<n;i++) sum += a[i];
    printf("Sum = %ld\n", sum);
    return 0;
}

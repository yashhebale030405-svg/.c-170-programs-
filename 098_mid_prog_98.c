/*
 * Program 098: Bubble sort
 * Concept: sorting, nested loops, arrays
 */
#include <stdio.h>

int main() {
    int n; printf("n: ");
    if (scanf("%d",&n)!=1) return 0;
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1-i;j++)
            if (a[j] > a[j+1]) { int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
    printf("Sorted: ");
    for (int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

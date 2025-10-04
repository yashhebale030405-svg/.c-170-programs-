/*
 * Program 093: Dynamic memory - allocate array with malloc
 * Concept: malloc, free
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n: ");
    if (scanf("%d",&n)!=1) return 0;
    int *a = malloc(sizeof(int)*n);
    if (!a) return 1;
    for (int i=0;i<n;i++) { a[i]=i+1; }
    for (int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}

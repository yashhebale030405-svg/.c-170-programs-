/*
 * Program 097: Linear search in array
 * Concept: arrays, loops, return index
 */
#include <stdio.h>

int main() {
    int n, key;
    printf("n: ");
    if (scanf("%d", &n)!=1) return 0;
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter key to search: ");
    scanf("%d",&key);
    int idx = -1;
    for (int i=0;i<n;i++) if (a[i]==key) { idx = i; break; }
    if (idx==-1) printf("Not found\n"); else printf("Found at index %d\n", idx);
    return 0;
}

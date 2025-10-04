/*
 * Program 143: Binary search (sorted array)
 * Concept: binary search algorithm
 */
#include <stdio.h>

int main() {
    int n; if (scanf("%d",&n)!=1) return 0;
    int a[n]; for (int i=0;i<n;i++) scanf("%d",&a[i]);
    int key; scanf("%d",&key);
    int l=0,r=n-1;
    while (l<=r) {
        int m = l + (r-l)/2;
        if (a[m]==key) { printf("Found at %d\n", m); return 0; }
        else if (a[m] < key) l = m+1;
        else r = m-1;
    }
    printf("Not found\n");
    return 0;
}

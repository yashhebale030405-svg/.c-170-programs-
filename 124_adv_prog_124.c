/*
 * Program 124: Merge two sorted arrays (merge step)
 * Concept: merging, indices
 */
#include <stdio.h>

int main() {
    int n,m; if (scanf("%d %d",&n,&m)!=2) return 0;
    int A[n], B[m];
    for (int i=0;i<n;i++) scanf("%d",&A[i]);
    for (int i=0;i<m;i++) scanf("%d",&B[i]);
    int i=0,j=0;
    while (i<n || j<m) {
        if (j==m || (i<n && A[i]<=B[j])) { printf("%d ", A[i]); i++; }
        else { printf("%d ", B[j]); j++; }
    }
    printf("\n");
    return 0;
}

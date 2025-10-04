/*
 * Program 127: Simple binary tree creation (array representation)
 * Concept: tree traversal (in-order) using recursion
 */
#include <stdio.h>

void inorder(int a[], int idx, int n) {
    if (idx >= n) return;
    inorder(a, 2*idx+1, n);
    printf("%d ", a[idx]);
    inorder(a, 2*idx+2, n);
}

int main() {
    int n; if (scanf("%d",&n)!=1) return 0;
    int a[n]; for (int i=0;i<n;i++) scanf("%d",&a[i]);
    inorder(a, 0, n);
    printf("\n");
    return 0;
}

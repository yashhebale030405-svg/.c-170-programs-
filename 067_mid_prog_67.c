/*
 * Program 067: 2D array - matrix addition
 * Concept: 2D arrays, nested loops
 */
#include <stdio.h>

int main() {
    int r,c;
    printf("Rows and cols: ");
    if (scanf("%d %d",&r,&c)!=2) return 0;
    int A[r][c], B[r][c];
    printf("Enter A elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    printf("Enter B elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&B[i][j]);
    printf("Sum:\n");
    for(int i=0;i<r;i++){ for(int j=0;j<c;j++) printf("%d ", A[i][j]+B[i][j]); printf("\n"); }
    return 0;
}

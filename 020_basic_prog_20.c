/*
 * Program 020: Print multiplication table
 * Concept: for loop, nested loops
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter number for table: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i=1;i<=10;i++) printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}

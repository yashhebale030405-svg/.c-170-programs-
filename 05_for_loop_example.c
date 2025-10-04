/*
 * Program 05: For-loop example
 * Concept: for loop to print numbers
 */
#include <stdio.h>

int main() {
    int n, i;
    printf("Print numbers up to: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

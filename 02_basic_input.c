/*
 * Program 02: Basic Input and Output using scanf and printf
 * Concept: scanf(), printf()
 */
#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer: ");
    if (scanf("%d", &x) == 1) {
        printf("You entered: %d\n", x);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}

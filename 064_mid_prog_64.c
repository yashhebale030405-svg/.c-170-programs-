/*
 * Program 064: String reversal using pointers
 * Concept: char arrays, pointers
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    printf("Enter string (no spaces): ");
    if (scanf("%299s", s)!=1) return 0;
    int l = strlen(s);
    for (int i=l-1;i>=0;i--) putchar(s[i]);
    putchar('\n');
    return 0;
}

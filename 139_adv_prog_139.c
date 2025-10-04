/*
 * Program 139: Memory and pointer exercise - copy string using pointers
 * Concept: pointers, arrays, loops
 */
#include <stdio.h>

int main() {
    char src[200];
    printf("Enter a string (no spaces): ");
    if (scanf("%199s", src)!=1) return 0;
    char dst[200];
    char *s = src, *d = dst;
    while (*s) { *d++ = *s++; }
    *d = '\0';
    printf("Copied: %s\n", dst);
    return 0;
}

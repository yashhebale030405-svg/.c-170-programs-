/*
 * Program 113: Read and write to a file (copy input to file)
 * Concept: FILE*, fopen, fprintf, fscanf
 */
#include <stdio.h>

int main() {
    char fname[200];
    printf("Enter filename to create: ");
    if (scanf("%199s", fname)!=1) return 0;
    FILE *f = fopen(fname, "w");
    if (!f) { perror("fopen"); return 1; }
    printf("Enter a line (no spaces): ");
    char s[200];
    if (scanf("%199s", s)==1) fprintf(f, "%s\n", s);
    fclose(f);
    printf("Wrote to %s\n", fname);
    return 0;
}

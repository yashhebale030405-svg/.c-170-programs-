/*
 * Program 145: Simple file copy
 * Concept: fopen, fgetc, fputc
 */
#include <stdio.h>

int main() {
    char in[200], out[200];
    printf("Source and destination filenames: ");
    if (scanf("%199s %199s", in, out)!=2) return 0;
    FILE *src = fopen(in, "r");
    if (!src) { perror("fopen src"); return 1; }
    FILE *dst = fopen(out, "w");
    if (!dst) { perror("fopen dst"); fclose(src); return 1; }
    int c;
    while ((c = fgetc(src)) != EOF) fputc(c, dst);
    fclose(src); fclose(dst);
    printf("Copied %s to %s\n", in, out);
    return 0;
}

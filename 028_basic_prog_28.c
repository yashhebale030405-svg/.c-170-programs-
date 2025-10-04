/*
 * Program 028: Count vowels in a string
 * Concept: string input, loops
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string (no spaces): ");
    if (scanf("%199s", s)!=1) return 0;
    int cnt=0;
    for (int i=0;i<strlen(s);++i) {
        char c = s[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') cnt++;
    }
    printf("Vowels = %d\n", cnt);
    return 0;
}

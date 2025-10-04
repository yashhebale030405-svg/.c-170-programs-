/*
 * Program 121: Stack using array
 * Concept: stack operations, push/pop
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; printf("Max stack size: ");
    if (scanf("%d",&n)!=1) return 0;
    int *st = malloc(sizeof(int)*n);
    int top = -1;
    int choice, x;
    printf("Commands: 1 push, 2 pop, 3 exit\n");
    while (scanf("%d",&choice)==1) {
        if (choice==1) { scanf("%d",&x); if (top < n-1) st[++top]=x; else printf("Overflow\n"); }
        else if (choice==2) { if (top>=0) printf("Popped %d\n", st[top--]); else printf("Underflow\n"); }
        else break;
    }
    free(st);
    return 0;
}

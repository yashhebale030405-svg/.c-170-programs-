/*
 * Program 130: Singly linked list - insert and display
 * Concept: dynamic memory, structs, pointers
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node* new_node(int v) {
    Node *n = malloc(sizeof(Node));
    n->val = v; n->next = NULL; return n;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int n;
    printf("Enter numbers ending with -1:\n");
    while (scanf("%d",&n)==1 && n!=-1) {
        Node *nn = new_node(n);
        if (!head) head = tail = nn;
        else { tail->next = nn; tail = nn; }
    }
    printf("List: ");
    for (Node* p = head; p; p = p->next) printf("%d ", p->val);
    printf("\n");
    return 0;
}

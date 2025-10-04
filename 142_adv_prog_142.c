/*
 * Program 142: Queue using linked list
 * Concept: enqueue, dequeue with pointers
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val; struct Node *next;
} Node;

int main() {
    Node *front = NULL, *rear = NULL;
    int cmd, x;
    printf("Commands: 1 enqueue, 2 dequeue, 3 exit\n");
    while (scanf("%d", &cmd)==1) {
        if (cmd==1) {
            scanf("%d",&x);
            Node *n = malloc(sizeof(Node)); n->val=x; n->next=NULL;
            if (!rear) front = rear = n; else { rear->next=n; rear=n; }
        } else if (cmd==2) {
            if (!front) printf("Empty\n");
            else { Node* t = front; printf("Dequeued %d\n", t->val); front = front->next; free(t); if (!front) rear=NULL; }
        } else break;
    }
    return 0;
}

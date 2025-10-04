/*
 * Program 09: Simple calculator using switch-case
 * Concept: input, switch, basic operations
 */
#include <stdio.h>

int main() {
    double a, b;
    char op;
    printf("Enter expression (e.g. 2.5 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 0;
    switch (op) {
        case '+': printf("%.2f\n", a + b); break;
        case '-': printf("%.2f\n", a - b); break;
        case '*': printf("%.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("%.2f\n", a / b);
            else printf("Divide by zero error.\n");
            break;
        default: printf("Unknown operator.\n");
    }
    return 0;
}

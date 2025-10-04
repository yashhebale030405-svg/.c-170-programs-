/*
 * Program 034: Simple interest calculation
 * Concept: floating point, printf formatting
 */
#include <stdio.h>

int main() {
    double p, r, t;
    printf("Enter principal, rate(%%), time(years): ");
    if (scanf("%lf %lf %lf", &p, &r, &t)!=3) return 0;
    double si = p * r * t / 100.0;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}

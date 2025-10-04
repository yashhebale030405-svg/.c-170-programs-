/*
 * Program 116: Simple struct usage
 * Concept: struct, typedef
 */
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p;
    printf("Enter name (no spaces) and age: ");
    if (scanf("%49s %d", p.name, &p.age)!=2) return 0;
    printf("Name: %s, Age: %d\n", p.name, p.age);
    return 0;
}

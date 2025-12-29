#include "lib.h"

void print_person(person_t *p)
{
    if (p == NULL) {
        printf("Neznama osoba!\n");
        return;
    }
    printf("Osoba %s %s ma vek %u \n", p->name, p->surname, p->age);
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    char *name;
    char *surname;
    unsigned char age;
} persona_t;

int main(int argc, char *argv[])
{
    persona_t osoba;
    osoba.name = (char*)malloc(strlen(argv[1])+1);
    osoba.surname = malloc(strlen(argv[2])+1);
    strcpy(osoba.name, argv[1]);
    strcpy(osoba.surname, argv[2]);
    osoba.age = (unsigned char)atoi(argv[3]);

    printf("Osoba %s %s ma vek %u \n", osoba.name, osoba.surname, osoba.age);

    return EXIT_SUCCESS;
}
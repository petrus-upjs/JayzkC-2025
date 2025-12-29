#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    char *str   = "Ahoj svet";
    char **pstr = &str;

    person_t *pos = (person_t*)malloc(sizeof(person_t)*MAX_PERSONS);
    if (pos == NULL) {
        return EXIT_FAILURE;
    }

    pos[1].age = 20;
    pos[1].name    = (char*)malloc(MAX_STR_LEN);
    pos[1].surname = (char*)malloc(MAX_STR_LEN);
    if ((pos+1)->name == NULL || (pos+1)->surname == NULL) {
        return EXIT_FAILURE;
    }

    strcpy(pos[1].name, "Janko");
    strcpy(pos[1].surname, "Hrasko");

    print_person(pos+1);

    free(pos[1].name);
    free(pos[1].surname);
    free(pos);

    printf("vELKOST STRUKTURY = %lu\n", sizeof(person_t));

    //printf("Adresa premennej str = %p \n", str);
    //printf("Adresa premennej pstr = %p \n", pstr);
    //printf("Obsah premennej pstr = %s \n", *pstr);

    return EXIT_SUCCESS;
}
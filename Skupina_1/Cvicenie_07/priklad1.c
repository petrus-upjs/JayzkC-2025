#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc <= 1) {
        printf("Je potrebny argument na prikazovom riadku!\n");
        return EXIT_FAILURE;
    }

    uint8_t slen = strlen(argv[1]);
    char *cstr = (char*)malloc(slen+1);
    if (cstr == NULL) {
        printf("Nepodarilo sa alokovat pamat!\n");
        return EXIT_FAILURE;
    }
    memset(cstr, 0, slen+1);

    strcpy(cstr, argv[1]);
    printf("Povodny retazec = %s, kopirovany retazec = %s \n", argv[1], cstr);

    free(cstr);

    return EXIT_SUCCESS;
}
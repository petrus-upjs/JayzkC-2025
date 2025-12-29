#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc <= 1) {
        printf("Nedostatok argumentov! \n");
        return EXIT_FAILURE;
    }

    unsigned char slen = strlen(argv[1])+1;
    char *cstr         = (char*)malloc(slen);
    if (cstr == NULL) {
        printf("Chyba alokacie pamate!\n");
        return EXIT_FAILURE;
    }
    memset(cstr, 0, slen);

    strcpy(cstr, argv[1]);
    printf("Povodny retazec = %s,    kopirovany retazec = %s \n", argv[1], cstr);

    free(cstr);

    return EXIT_SUCCESS;
}
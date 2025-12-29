#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

typedef enum {
    FALSE = 0,
    false = 0,
    TRUE = 1,
    true = 1
} boolean;


int main(int argc, char *argv[])
{
/*
    boolean pb;
    pb = TRUE;
    printf("Stav premennej pb %d \n", pb);
*/
    if (argc < 2) {
        printf("Pouzitie %s <argument 1> <argument 2> \n\n", argv[0]);
        return 1;
    }

    for (int x=0; x<argc; x++) {
        printf("Obsah %d. argumentu prikazoveho riadka = %s\n", x, argv[x]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

typedef enum {
    FALSE = 0,
    false = 0,
    TRUE = 1,
    true = 1
} boolean_t;

int main(int argc, char *argv[])
{
    boolean_t nieco = TRUE;
    printf("Hodnota nieco = %d\n", nieco);

    for (int i = 0; i < argc; i++) {
        printf("Obsah %d. argumentu prikazoveho riadka = %s\n", i, argv[i]);
    }

    return 0;
}
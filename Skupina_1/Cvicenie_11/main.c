#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    // Staticky alokujem pamat pre vstupny text + vynulujem 
    char buffer[MAX_STR_LENGTH];
    memset(buffer, 0, MAX_STR_LENGTH);

    // Vyziadam text
    printf("Zadaj text: ");
    fflush(stdout);
    
    // funkciou fgets nacitam vstupny text
    fgets(buffer, MAX_STR_LENGTH, stdin);
    
    // nad nacitanym textm zavolam funkciu rotate_string, ktora zrealizuje transformaciu
    // verifikujem vystup funkcie a v pripade, ze vratila NULL ukoncim s chybovym hlasenim
    char *transformed = rotate_string(buffer);
    if (transformed == NULL) {
        fprintf(stderr, "Chyba pri transformacii!\n");
        return EXIT_FAILURE;
    }
        
    // vypisem transformovany text a uvolnim pamat alokovanu vo funkcii rotate_string
    printf("Transformovany retazec: %s\n", transformed);
    free(transformed);

    return EXIT_SUCCESS;
}
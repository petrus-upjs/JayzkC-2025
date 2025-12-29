#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    element_t *list = NULL;

    while (1) {
        element_t *e = read_element_from_stdin();
        if (e == NULL) break;
        // je potrebny ukazovatel na ukazovatel, aby 
        // bolo mozne zmenit adresu premennej list, ktora ukazuje
        // na prvy element
        add_element(&list, e);
    }

    print_list(list);
    reorder_list(&list);
    print_list(list);
    free_list(&list);

    // Len ako ukazka, ze zoznam bol vyprazdneny.
    print_list(list);

    return EXIT_SUCCESS;
}

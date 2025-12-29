#include "lib.h"

/*
    Funkcia rtrim - odstrani vsetky biele znaky z konca retazca
*/
void rtrim(char *str)
{
    // overim, ci premenna str obsahuje platny ukazovatel, pripadne, ci retazec ma nenulovu dlzku
    if ((str == NULL) || (strlen(str) == 0)) return;
    for (int16_t it = (strlen(str)-1); it >= 0; it--) {
        if (str[it] <= 32) str[it] = 0;
        else return;
    }
}

/*
    Funkcia read_element_from_stdin - nacitava novy element zo vstupu
      - dynamicky alokuje pamat pre text vo vnutri struktury element_t
      - dynamicky alokuje pamat pre samotny element (strukturu)
*/
element_t *read_element_from_stdin()
{
    printf("Zadaj ID [0 = koniec]: ");
    fflush(stdout);
    char buffer[MAX_STR_LEN];
    memset(buffer, 0, MAX_STR_LEN);
    fgets(buffer, MAX_STR_LEN, stdin);
    uint8_t id = atoi(buffer);
    if (id == 0) {
        return NULL;
    }
    printf("Zadaj text: ");
    fflush(stdout);
    char *text = (char*)malloc(MAX_STR_LEN);
    if (text == NULL) {
        fprintf(stderr, "Chyba alokacie pamate pre text!\n");
        return NULL;
    }
    memset(text, 0, MAX_STR_LEN);
    fgets(text, MAX_STR_LEN, stdin);
    rtrim(text);
    element_t *e = (element_t*)malloc(sizeof(element_t));
    if (e == NULL) {
        free(text);
        fprintf(stderr, "Chyba alokacie pamate pre element!\n");
        return NULL;
    }
    e->id = id;
    e->text = text;
    e->prev = NULL;
    e->next = NULL;
    return e;
}

/*
    Funkcia get_last_element - vyhlada posledny element v zozname
        - je potrebny ukazovatel na ukazovatel, aby 
          bolo mozne zmenit adresu premennej list, ktora ukazuje
          na prvy element

*/
element_t *get_last_element(element_t *list)
{
    if (list == NULL) return NULL;
    element_t *e = list;
    while (1) {
        if (e->next != NULL) {
            e = e->next;
        } else break;
    }
    return e;
} 

/*
    Funkcia add_element - prida novy element do zoznamu
*/
void add_element(element_t **list, element_t *element)
{
    if (element == NULL) return;
    if (*list == NULL) {
        *list = element;
    } else {
        element_t *last = get_last_element(*list);
        last->next = element;
        element->prev = last;
    }
}

/*
    Funkcia reorder_list - preusporiada elementy podla ID od najnizsieho po najvyssi
*/
void reorder_list(element_t **list)
{
    if (*list == NULL) return;
    uint16_t changes = 0;
    element_t *e = *list;
    while (1) {
        element_t *e_next  = e->next;
        if (e_next != NULL) {
            if (e->id > e_next->id) {
                if (e->prev == NULL) {
                    *list = e_next;
                } else {
                    e->prev->next = e_next;
                }
                if (e_next->next != NULL) {
                    e_next->next->prev = e;
                }
                e->next = e_next->next;
                e_next->next = e;
                
                e_next->prev = e->prev;
                e->prev = e_next;

                changes++;
                continue;
            }
            e = e_next;
        } else {
            if (changes > 0) {
                changes = 0;
                e = *list;
            } else break;
        }
    }
}

/*
    Funkcia print_list - vypise cely zoznam od prveho po posledny element
*/
void print_list(element_t *list)
{
    if (list == NULL) {
        fprintf(stderr, "Zoznam je prazdny!\n");
        return;
    }
    printf("---------------------------------------------------------------------------------\n");
    element_t *e = list;
    while (1) {
        printf("ID: %u [%p], TEXT: %s, PREV: [%p], NEXT: [%p] \n", e->id, e, e->text, e->prev, e->next);
        if (e->next != NULL) {
            e = e->next;
        } else break;
    }
    printf("---------------------------------------------------------------------------------\n");
}

/*
    Funkcia free_list - odstrani vsetky elementy zo zoznamu
        - uvolni pamat pre kazdu datovu zlozku "text"
        - uvolni pamat alokovanu pre kazdy element (strukturu)
*/
void free_list(element_t **list)
{
    if (*list == NULL) {
        fprintf(stderr, "Zoznam je prazdny!\n");
        return;
    }
    element_t *e = *list;
    while (1) {
        if (e->text != NULL) free(e->text);
        if (e->next != NULL) {
            e = e->next;
            free(e->prev);
        } else {
            free(e);
            break;
        }
    }
    *list = NULL;
}

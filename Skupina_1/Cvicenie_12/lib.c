#include "lib.h"

element_t *read_data_stdin()
{
    char *text = (char*)malloc(MAX_TEXT_LEN);
    if (text == NULL) {
        fprintf(stderr, "Chyba alokacie pamate!\n");
        return NULL;
    }
    printf("Zadaj ID [ukoncenie = 0]: ");
    fflush(stdout);
    char buffer[MAX_TEXT_LEN];
    memset(buffer, 0, MAX_TEXT_LEN);
    fgets(buffer, MAX_TEXT_LEN, stdin);
    uint8_t id = atoi(buffer);
    if (id == 0) {
        free(text);
        return NULL;
    }
    memset(text, 0, MAX_TEXT_LEN);
    printf("Zadaj text: ");
    fflush(stdout);
    fgets(text, MAX_TEXT_LEN, stdin);
    element_t *e = (element_t*)malloc(sizeof(element_t));
    if (e == NULL) {
        free(text);
        fprintf(stderr, "Chyba alokacie pamate!\n");
        return NULL;
    }
    e->id = id;
    e->text = text;
    e->prev = NULL;
    e->next = NULL;
    return e;
}

element_t *get_last(element_t *list)
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

void add_element(element_t **list, element_t *element)
{
    if (*list == NULL) {
        *list = element;
    } else {
        element_t *last = get_last(*list);
        last->next = element;
        element->prev = last;
    }
}

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

void print_list(element_t *list)
{
    if (list == NULL) {
        fprintf(stderr, "Zoznam je prazdny!\n");
        return;
    }
    element_t *e = list;
    while (1) {
        printf("ID: %u, TEXT: %s \n", e->id, e->text);
        if (e->next != NULL) {
            e = e->next;
        } else break;
    }
}
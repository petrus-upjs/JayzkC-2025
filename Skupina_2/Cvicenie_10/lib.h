#ifndef __LIB_H__
#define __LIB_H__ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define MAX_STR_LEN 256

typedef struct element {
    uint8_t id;
    char *text;
    struct element *prev;
    struct element *next;
} element_t;

void rtrim(char *str);
element_t *read_element_from_stdin();
element_t *get_last_element(element_t *list);
void add_element(element_t **list, element_t *element);
void reorder_list(element_t **list);
void print_list(element_t *list);
void free_list(element_t **list);

#endif
#ifndef __LIB_H__
#define __LIB_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define MAX_TEXT_LEN 256

typedef struct element {
    uint8_t id;
    char *text;
    struct element *prev;
    struct element *next;
} element_t;

element_t *read_data_stdin();
void add_element(element_t **list, element_t *element);
void free_list(element_t **list);
void print_list(element_t *list);


#endif 
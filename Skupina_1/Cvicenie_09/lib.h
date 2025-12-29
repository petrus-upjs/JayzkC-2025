#ifndef __LIB_H__
#define __LIB_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    char *name;
    char *surname;
    uint8_t age;
} person_t;

#define MAX_STR_LEN 50
#define MAX_PERSONS 50

void print_person(person_t *p);

#endif 
#ifndef __LIB_H__
#define __LIB_H__ 


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define MAX_STR_LEN 50
#define MAX_PERS_ARR 10

typedef struct {
    char *name;
    char *surname;
    uint8_t age;
} person_t;

void write_person(person_t *p);

#endif
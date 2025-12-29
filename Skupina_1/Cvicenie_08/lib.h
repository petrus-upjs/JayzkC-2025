#ifndef __LIB_H__
#define __LIB_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    int a;
    int b;
} my_struct_t;

int sum(my_struct_t x);

#endif 
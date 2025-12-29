#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    my_struct_t x;
    x.a = 10;
    x.b = 20;

    int c = sum(x);
    printf("Sucet = %d\n", c);

    return EXIT_SUCCESS;
}
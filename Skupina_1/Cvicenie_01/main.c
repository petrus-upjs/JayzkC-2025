#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

typedef enum {
    FALSE = 0,
    false = 0,
    TRUE = 1,
    true = 1
} boolean;


int main()
{
    boolean pb;
    pb = TRUE;

    char a = 10;
    char b = a++;
    a++
    unsigned char c = 255;

    // Ukazka roznej interpretacie hodnot v premennych

    printf("Premenna a obsahuje pismeno %c \n", a);
    printf("Premenna b obsahuje hodnotu %d \n", b);

    printf("Premenna c interpretovana ako cele kladne cislo: %u \n", c);
    printf("Premenna c interpretovana ako cele cislo (v rozsahu od -128 do 127): %d \n", (char)c);

    return 0;
}
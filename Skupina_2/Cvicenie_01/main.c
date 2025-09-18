#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    char a = 65;
    char b = 'A';
    unsigned char c = 255;

    // Ukazka roznej interpretacie hodnot v premennych

    printf("Premenna a obsahuje pismeno %c \n", a);
    printf("Premenna b obsahuje hodnotu %d \n", b);

    printf("Premenna c interpretovana ako cele kladne cislo: %u \n", c);
    printf("Premenna c interpretovana ako cele cislo (v rozsahu od -128 do 127): %d \n", (char)c);

    return 0;
}
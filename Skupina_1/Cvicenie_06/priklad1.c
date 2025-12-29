#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define MAX_STR_LEN 5

int *sucet(int *a, int *b, int *c);

int main(int argc, char *argv[])
{
    int a = 10;
    int b = 20;
    int c = 100;

    printf("Hodnota premennej c = %d\n", c);

    sucet()

    int *adr = sucet(&a, &b, &c);

    printf("Hodnota premennej c = %d\n", c);
    printf("Adresa premennej c = %p a navratova hodnota funkcie sucet = %p \n", &c, adr);

    char str1[] = "Ahoj";
    char buffer[MAX_STR_LEN];
    char str2[] = "svet";

    memset(buffer, 0, MAX_STR_LEN);

    strncpy(buffer, argv[0], MAX_STR_LEN - 1);
    //buffer[4] = 0;
    printf("Prvy retrazec = %s, druhy retazec = %s \n", argv[0], buffer);

    return 0;
}

int *sucet(int *a, int *b, int *c) 
{
    *c = *a + *b;
    return c;
}

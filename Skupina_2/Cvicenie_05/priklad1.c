#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

// Maximum string length
#define MAX_STR_LEN 5
#define DEF_STR "AHOJ SVET"

int *sucet(int, int, int*);

int main(int argc, char *argv[])
{
    char text[] = "Ahoj svet";


    int a = 100;
    int b = 200;
    int vysledok = 0;
    printf("Hodnota premennej vysledok = %d\n", vysledok);
    printf("Hodnota premennej vysledok = %d\n", *sucet(a, b, &vysledok));
    
/*

    char str[] = DEF_STR;

    char s1[] = "--------";
    char buffer[MAX_STR_LEN];
    char s2[] = "++++++++";

    memset(buffer, 0, MAX_STR_LEN);

    strncpy(buffer, str, MAX_STR_LEN - 1);
    //buffer[4] = 0;

    printf("Obsah premennej buffer = %s\n", buffer);
    printf("Obsah premennej s1 = %s\n", s1);
    printf("Obsah premennej s2 = %s\n", s2);
*/

    return EXIT_SUCCESS;
}

int *sucet(int a, int b, int *c)
{
    *c = a + b;
    return c;
}
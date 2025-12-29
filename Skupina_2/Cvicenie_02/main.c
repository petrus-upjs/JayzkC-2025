#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    unsigned short w = 13106;
    unsigned char *pw = (unsigned char*)&w;
    printf("Hodnota w [0 bajt] = %u \n", (unsigned char)w);
    printf("Hodnota w [1 bajt] = %u \n", *((unsigned char*)(pw+1)));
/*
    char v = 49;
    char x = 50;
    char y = 51;
    char z = 52;
    printf("Premenne [%p]%c[%p]%c[%p]%c[%p]%c \n", &v, v, &x, x, &y, y, &z, z);
    unsigned short *test = &x;
    printf("Hodnota premennej test = %u [%p] \n", *((unsigned char*)test), test);

    char *p = &v;
    for (unsigned char i=0; i<4; i++) {
        printf("Vypis hodnoty na adrese %p = %c {dec: %u} \n", (p+i), *(p+i), *(p+i));
    }
*/
/*
    void *c;

    int a = 100;
    int *d = &a;
    int e = *d;

    printf("Hodnota premennej a = %d [%p]\n", a, &a);
    printf("Hodnota premennej e = %d [%p]\n", e, &e);
*/
    return 0;
}
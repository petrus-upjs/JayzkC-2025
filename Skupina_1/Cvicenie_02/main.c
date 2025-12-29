#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    unsigned char v = 49;
    unsigned char x = 50;
    unsigned char y = 51;
    unsigned char z = 52;

    printf("Premenne: [%p]%c[%p]%c[%p]%c[%p]%c \n", &v, v, &x, x, &y, y, &z, z);

    unsigned int *test = &x;
    printf("Hodnota premennej test = [%p] %u \n", test, *(test));


/*
    int a = 100;
    void *c = &a;

    printf("Hodnota premennej a = %d \n", a);
    printf("Hodnota na ktoru ukazuje premenna c [%p] = %d \n", c, *((int*)c));
*/

    return 0;
}
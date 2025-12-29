#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    /*
    char *pch  = "Ahoj svet";
    char *tmp  = pch+3;
    *tmp = 0;

    printf("R: %s\n", pch);
    printf("R: %s\n", tmp);
    */

    char ach[] = "Ahoj svet";
    char *tmp = ach+3;
    *tmp = 0;

    printf("R: %s\n", ach);
    printf("R: %s\n", tmp+1);

    return 0;
}
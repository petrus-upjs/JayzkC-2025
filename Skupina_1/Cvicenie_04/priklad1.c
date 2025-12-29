#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    char mpole1[10] = {65, 'h', 'o', 'j', ' ', 's', 'v', 'e', 't', 0};
    printf("Vypis retazca: %s s velkostou %lu \n", mpole1, sizeof(mpole1));

    char *ppole = mpole1;
    ppole++;
    printf("Vypis retazca: %s s velkostou %lu \n", ppole, sizeof(ppole));

    char *str = "Ahoj svet!";
    printf("Vypis retazca: %s s velkostou %lu \n", str, sizeof(str));

    return 0;
}    
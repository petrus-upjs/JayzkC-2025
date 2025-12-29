#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    char pole1[5] = {'A', 'h', 'o', 'j', 0};
    char pole2[]  = "Ahoj svet";
    char *retazec = "Ahoj krasny svet!";

    printf("Obsah (s velkostou %lu) pola 1 = %s \n", sizeof(pole1), pole1);
    printf("Obsah (s velkostou %lu) pola 2 = %s \n", sizeof(pole2), pole2);

    printf("Velkost int je %lu a velkost char je %lu \n", sizeof(int), sizeof(char));

    char *str = pole1;
    printf("Obsah (s velkostou %lu) pola str = %s \n", sizeof(str), str);
    str++;
    printf("Obsah pola str = %s \n", str);

    char *str2 = &pole1[20];
    printf("Obsah retazca str2 = %s \n", str2);
    


    return 0;
}
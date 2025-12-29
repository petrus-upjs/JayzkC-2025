#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int main()
{
    char *str = "Ahoj svet!";
    char *bkpstr = str;

    printf("Retazec %s je na adrese %p \n", str, str);

    printf("Prvy znak retazca %s je %c \n", str, *str);
    printf("Druhy znak retazca %s je %c \n", str, *(str+1));

    while (*str != 0) {
        printf("znak: %c adresa znaku %p \n", *str, str);
        str++;
    }

    printf("Reatzec str obsahuje text: %s\n", (str+200));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

char *substr(char str[], int start, int length)
{
    if (start+length > strlen(str)) {
        return NULL;
    }
    str[start+length] = 0;
    return str + start;
}

int main(int argc, char *argv[])
{
    char instr[] = "Ahoj svet";
    char *subs   = substr(instr, 5, 2);
    if (subs == NULL) {
        printf("Nespravne vstupne atrgumenty!\n");
        return EXIT_FAILURE;
    }
    printf("Podretazec = %s\n", subs);

    return EXIT_SUCCESS;
}
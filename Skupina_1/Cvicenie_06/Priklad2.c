#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define MAX_STR_LEN 5

char *substr(char str[], int first, int length)
{
    if (strlen(str) < (first+length)) return NULL;
    str[first+length] = 0;
    return str+first;
}

int main(int argc, char *argv[])
{
    char moj_retazec[] = "Ahoj svet";
    
    char *sub = substr(moj_retazec, 5, 2);
    if (sub == NULL) {
        printf("Nespravne parametre pre fn substr!\n");
        return 1;
    }

    printf("Padretazec = %s \n", substr(moj_retazec, 5, 2));

    return 0;
}
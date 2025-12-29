#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    /*
    char *mystr = "Ahoj svet";

    FILE *fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Subor nie je mozne otvorit pre zapis!\n");
        return EXIT_FAILURE;
    }
    size_t nw = fwrite(mystr, sizeof(char), strlen(mystr), fp);
    if (nw != strlen(mystr)) {
        printf("Neboli zapisane vsetky znaky!\n");
        return EXIT_FAILURE;
    }
    fclose(fp);
    */
    /*
    FILE *fp2 = fopen("myfile2.txt", "r");
    if (fp2 == NULL) {
        fprintf(stderr, "Subor nie je mozne otvorit na citanie!\n");
        return EXIT_FAILURE;
    }
    char buffer[MAX_BUFFER_SIZE];
    memset(buffer, 0, MAX_BUFFER_SIZE);
    size_t nr = fread(buffer, sizeof(char), (MAX_BUFFER_SIZE-1), fp2);
    if (nr == 0) {
        fprintf(stderr, "Neboli nacitane ziadne znaky!\n");
        return EXIT_FAILURE;
    }
    fclose(fp2);
    printf("Nacitany retazec: %s [%lu]\n", buffer, nr);
    */

    char buffer[MAX_BUFFER_SIZE];
    memset(buffer, 0, MAX_BUFFER_SIZE);
    printf("Ako sa volas: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);

    printf("Ahoj %s\n", buffer);


    return EXIT_SUCCESS;
}
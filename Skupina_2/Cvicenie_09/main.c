#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    char *str = "AHOJ SVET";
/*
    FILE *fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Nepodarilo sa otvorit subor pre zapis!\n");
        return EXIT_FAILURE;
    }
    size_t nw = fwrite(str, sizeof(char), strlen(str), fp);
    if (nw != strlen(str)) {
        printf("Nepodarilo sa zapisat vsetky znaky!\n");
        return EXIT_FAILURE;
    }
    fclose(fp);
*/
/*
    FILE *fp2 = fopen("myfile.txt", "r");
    if (fp2 == NULL) {
        fprintf(stderr, "Nepodarilo sa otvorit subor na citanie!\n");
        return EXIT_FAILURE;
    }
    char buffer[MAX_BUF_LEN];
    memset(buffer, 0, MAX_BUF_LEN);
    size_t nr = fread(buffer, sizeof(char), (MAX_BUF_LEN-1), fp2);
    if (nr == 0) {
        fprintf(stderr, "Nepodarilo sa nacitat ziadne znaky zo suboru!\n");
        return EXIT_FAILURE;
    }
    fclose(fp2);
    fprintf(stdout, "Obsah suboru: %s\n", buffer);
*/

    char name[MAX_BUF_LEN];
    char surname[MAX_BUF_LEN];

    printf("Ake je Tvoje meno: ");
    fflush(stdout);
    fgets(name, MAX_BUF_LEN, stdin);
    name[strlen(name)-1] = 0;

    printf("Ake je Tvoje priezvisko: ");
    fgets(surname, MAX_BUF_LEN, stdin);

    printf("Ahoj %s %s\n", name, surname);

    return EXIT_SUCCESS;
}

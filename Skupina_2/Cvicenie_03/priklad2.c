#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

struct osoba {
    char meno[20];
    char priezvisko[20];
    short vek;
};

unsigned int dlzka_retazca(char *instr)
{
    unsigned int strlen = 0;
    while (*instr != 0) {
        strlen++;
        instr++;
    }
    return strlen;
}

int main()
{
    struct osoba clovek;
    clovek.vek = 25;

    char *m = "Janko";
    char *p = "Hrasko";

    printf("Dlzka retazca m je %u \n", dlzka_retazca(m));

    //clovek.meno = m;
    //clovek.priezvisko = p;

    //printf("Vek cloveka %s %s je %d \n", clovek.meno, clovek.priezvisko, clovek.vek);
    printf("velkost struktury clovek je %lu \n", sizeof(clovek));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

struct osoba {
    char *meno;
    char *priezvisko;
    int vek;
};


int main()
{
    char *meno = "Jozko";
    char *priezvisko = "Mrkvicka";
    struct osoba clovek;
    clovek.vek = 40;
    clovek.meno = meno;
    clovek.priezvisko = priezvisko;

    printf("velkost struktury je %lu a vek cloveka %s %s je %d \n", sizeof(clovek), clovek.meno, clovek.priezvisko, clovek.vek);

    return 0;
}    
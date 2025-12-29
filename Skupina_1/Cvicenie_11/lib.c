#include "lib.h"

/*
    Funckia rotate_word - otoci jedno slovo
*/
void rotate_word(char *word, uint16_t len)
{
    // overim, ci premenna word obsahuje platny ukazovatel, pripadne, ci slovo ma nenulovu dlzku
    if ((word == NULL) || (len == 0)) return;

    uint16_t half_len = len / 2;
    for (uint16_t it=0; it < half_len; it++) {
        char tmp     = word[it];
        word[it]     = word[(len-1)-it];
        word[(len-1)-it] = tmp;
    }
}

/*
    Funkcia rtrim - odstrani vsetky biele znaky z konca retazca
*/
void rtrim(char *str)
{
    // overim, ci premenna str obsahuje platny ukazovatel, pripadne, ci retazec ma nenulovu dlzku
    if ((str == NULL) || (strlen(str) == 0)) return;
    for (int16_t it = (strlen(str)-1); it >= 0; it--) {
        if (str[it] <= 32) str[it] = 0;
        else return;
    }
}

char *rotate_string(const char *input)
{
    // overim, ci premenna input obsahuje platny ukazovatel, pripadne, ci retazec ma nenulovu dlzku
    if ((input == NULL) || (strlen(input) == 0)) return NULL;
    uint16_t input_length = strlen(input);
    
    // alokujem pamat pre novy retazec, vynulujem ho a prekopirujem do neho obsah z pamate, kam ukazuje input
    // funkciou rtrim odstranim z konca retazca biele znaky
    char *new_str = (char*)malloc(input_length+1);
    if (new_str == NULL) return NULL;
    memset(new_str, 0, input_length+1);
    strcpy(new_str, input);
    rtrim(new_str);

    char *start = new_str;
    for (uint16_t it = 0; it < input_length; it++) {
        if (new_str[it] == ' ') {
            if (start == &new_str[it]) {
                start = (&new_str[it])+1;
                continue;
            }
            rotate_word(start, (&new_str[it])-start);
            start = (&new_str[it])+1;
        }
    }
    rotate_word(start, (&new_str[strlen(new_str)])-start);
    return new_str;
}

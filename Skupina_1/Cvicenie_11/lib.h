#ifndef __LIB_H__
#define __LIB_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define MAX_STR_LENGTH 256

void rotate_word(char *word, uint16_t len);
void rtrim(char *str);
char *rotate_string(const char *input);

#endif 
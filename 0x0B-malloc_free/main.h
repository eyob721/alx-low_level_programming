#ifndef MAIN_H
#define MAIN_H

#define SPACE 0
#define WORD 1

#include <stdlib.h>

/* Main Functions */
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

/* Support Functions */
int count_words(char *str);
char *word_dup(char *str);

#endif

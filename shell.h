#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

/* included standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* main */
int main(int ac, char **argv);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/* token */
char *strtok(char *str, const char *delim);

/* free or malloc */
void *malloc(size_t size);
void free(void *ptr);

/* string */
strcpy(lineptr_copy, lineptr);
/* pointers */
strcpy(lineptr_copy, lineptr);

#endif

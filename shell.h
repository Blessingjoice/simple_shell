#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

/* included standard library headers */
#include <stdio.h>
#include <stdlib.h>

/* main */
int main(int ac, char **argv);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif

#include "shell.h"

/**
 * main - Entry point
 *
 * main : shell prompt
 * @ac : arguments
 * @argv : arguments used
 *
 * Return: always 0
 */
int main(int ac, char **argv)
{
	char *lineptr = NULL;
	*lineptr_cpy = NULL;
	size_t n = 0;
	ssize_t nchars;
	int n_toks = 0;
	char *tok;
	int i;

	/* declaring void variables */
	(void)ac;
	
	/*allocate space for lineptr_cpy */
	lineptr_cpy = malloc(sizeof(char) *nchars);
        if (lineptr_cpy== NULL)
	{
		perror("memory allocation error");
		return (-1);
	}
	/* copy lineptr to lineptr_cpy */
	strcpy(lineptr_cpy, lineptr);

	/** split string "lineptr" into an array **/
	/* calc token number */
        tok = strtok(lineptr, delim);

	while (tok != NULL)
	{
		n_toks++;
		tok = strtok(NULL, delim);
	}
	n_toks++;

	/* Allocate space to hold the array */
	argv = malloc(sizeof(char *) *n_toks);

	/* Store token in argv array */
	tok = strtok(lineptr_cpy, delim);

	for (i = 0; tok != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(tok));
		strcpy(argv[i], token);

		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
	
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);
}

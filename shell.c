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
	char *prompt = "shell$ ";
	char *lineptr;
	size_t n = 0;

	/* declaring void variables */
	(void)ac;
	(void)argv;

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);
}

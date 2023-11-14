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
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t nchars;
	const char *delim = " \n"

	/* declaring void variables */
	(void)ac;
	(void)argv;

	/* create an infinite loop */
	while (1)
	{
		printf("%s", prompt);
		nchars = getline(&lineptr, &n, stdin);

		/* check for getline or EOF issues */
		if (nchars == -1)
		{
			printf("Exit..\n");
			return (-1);
		}
		printf("%s\n", lineptr);

		/* free up memory */
		free(lineptr);
	}
	return (0);
}

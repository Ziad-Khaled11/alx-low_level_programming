#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function prints all arguments
 *
 * @ac: parameter that taken to be checked
 * @av: parameter that takes into account
 * Return: array containing all arguments
 */
char *argstostr(int ac, char **av)
{
	int i, nc = 0, j, cmpt = 0, size;
	char *s;

	if (ac == 0 || av == NULL)
	return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (size = 0; av[i]; i++)
		;
		nc += size;
	}
	s = (char *)malloc(sizeof(char) * nc + 1);
	if (s == NULL)
	return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		s[cmpt] = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}

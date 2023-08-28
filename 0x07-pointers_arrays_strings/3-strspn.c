#include "main.h"

/**
 * _strspn - function prints length of consist bytes
 *
 * @s: parameter that taken to be checked
 * @accept: parameter that taken to be checked
 *
 * Return: number of equal chars
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

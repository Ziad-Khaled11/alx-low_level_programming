#include "main.h"

/**
 * *_strpbrk - function prints locates the first occurrence in the string s
 *
 * @s: parameter that taken to be checked
 * @accept: parameter that taken to be checked
 *
 * Return: first matching char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

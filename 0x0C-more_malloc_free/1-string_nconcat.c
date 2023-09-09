#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function allocates an array of strings
 *
 * @s1: parameter that taken to be checked
 * @s2: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 * Return: array of strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int size1 = 0, size2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (size1 = 0; s1[size1]; size1++)
	;
	for (size2 = 0; s2[size2]; size2++)
	;
	str = malloc(size1 + n + 1);
	if (str == NULL)
	return (NULL);
	for (i = 0; i < size1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

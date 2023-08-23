#include "main.h"

/**
 * *_strncat - function prints
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 * Return: 
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i])
		i++;
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

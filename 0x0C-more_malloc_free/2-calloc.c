#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function allocates an array
 *
 * @nmemb: parameter that taken to be checked
 * @size: parameter that taken to be checked
 *
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int n;
	char *ch;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	return ('\0');
	n = nmemb * sizeof(int);
	ch = ptr;
	while (n--)
	{
		*ch++ = '0';
	}
	return (ptr);
}

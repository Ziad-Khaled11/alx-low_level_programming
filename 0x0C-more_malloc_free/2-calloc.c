#include <stdlib.h>
#include "main.h"

#include "main.h"

/**
 * *_memset - function intialization array by 0
 *
 * @s: parameter that taken to be checked
 * @b: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}

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

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
	return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

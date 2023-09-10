#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area src
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area pointed
 *
 * @s: parameter that taken to be checked
 * @b: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}

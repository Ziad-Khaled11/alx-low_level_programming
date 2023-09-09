#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function checks array allocation
 *
 * @b: parameter that taken to be checked
 *
 * Return: 0 or 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	exit(98);
	return (ptr);
}

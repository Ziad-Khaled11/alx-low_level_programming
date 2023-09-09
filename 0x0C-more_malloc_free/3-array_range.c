#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function creates a array
 *
 * @min: parameter that taken to be checked
 * @max: parameter that taken to be checked
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
	return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[i - min] = i;
	}
	return (ptr);
}

#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function prints
 *
 * @array: parameter that taken to be checked
 * @size: parameter that taken to be checked
 * @action: parameter that taken to be checked
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
	return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

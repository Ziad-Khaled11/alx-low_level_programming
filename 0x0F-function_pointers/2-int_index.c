#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function prints index
 *
 * @array: parameter that taken to be checked
 * @size: parameter that taken to be checked
 * @cmp: parameter that taken to be checked
 *
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}

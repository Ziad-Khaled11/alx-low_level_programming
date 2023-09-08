#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  *create_array - function creates an array
 *
 * @size: parameter that taken to be checked
 * @c: parameter
 *
 * Return: array or null on failure
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc(sizeof(char) * size);
	if (size == 0 || array == 0)
	return ('\0');
	for (i = 0; i < size; i++)
	array[i] = c;
	return (array);
}

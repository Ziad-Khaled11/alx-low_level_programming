#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function reallocates an array
 *
 * @ptr: parameter that taken to be checked
 * @old_size: parameter that taken to be checked
 * @new_size: parameter that taken to be checked
 *
 * Return: array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	return (new_ptr);
}

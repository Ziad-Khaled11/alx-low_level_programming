#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function duplicates the string
 *
 * @str: parameter that taken to be checked
 *
 * Return: array or null terminated
 */

char *_strdup(char *str)
{
	char *arr;
	int size, i;

	for (size = 0; str[size]; size++)
	;
	arr = (char *)malloc(sizeof(char) * (size) + 1);
	if (size == 0 || arr == 0)
	return ('\0');
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}

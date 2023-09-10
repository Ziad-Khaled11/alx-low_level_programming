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

	if (str == NULL)
	return ('\0');
	for (size = 0; str[size]; size++)
	;
	arr = (char *)malloc(sizeof(char) * (size) + 1);
	if (arr == 0)
	return ('\0');
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}

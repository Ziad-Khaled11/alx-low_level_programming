#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function creates a string concatenation
 *
 * @s1: parameter that taken to be checked
 * @s2: parameter that taken to be checked
 * Return: array with concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *arr;

	if (s1 == NULL && s2 == NULL)
	return ('\0');
	for (size1 = 0; s1[size1]; size1++)
	;
	for (size2 = 0; s2[size2]; size2++)
	;
	arr = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
	if (arr == 0)
	return ('\0');
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		arr[i] = s1[i];
		else
		arr[i] = s2[i - size1];
	}
	arr[size1 + size2] = '\0';

	return (arr);
}

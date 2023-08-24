#include "main.h"

/**
 * *string_toupper - function prints
 *
 * @arr: parameter that taken to be checked
 *
 */

char *string_toupper(char *arr)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		if (arr[i] >= 97)
			arr[i] = arr[i] - 32;
	}
}

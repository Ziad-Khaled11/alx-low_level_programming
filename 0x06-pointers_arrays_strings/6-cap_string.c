#include "main.h"

/**
 * *cap_string - function prints
 *
 * @arr: parameter that taken to be checked
 *
 * Return: arr
 */

char *cap_string(char *arr)
{
	int i = 0;

	while (arr[i])
	{
		while (!(arr[i] >= 'a' && arr[i] <= 'z'))
			i++;
		if (arr[i - 1] == ',' || arr[i - 1] == ';' || arr[i - 1] == '.' ||
		arr[i - 1] == '?' || arr[i - 1] == '(' || arr[i - 1] == ')' ||
		arr[i - 1] == '{' || arr[i - 1] == '}' || arr[i - 1] == ' ' ||
		arr[i - 1] == '\t' || arr[i - 1] == '\n')
		{
			arr[i] = arr[i] - 32;
		}
		i++;
	}
	return (arr);
}

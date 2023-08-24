#include "main.h"

/**
 * *leet - function prints
 *
 * @arr: parameter that taken to be checked
 *
 * Return: arr
 */

char *leet(char *arr)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int nums[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (arr)
	{
		for (i = 0; i < 5; i++)
		{
			if (*arr == letters[i] || *arr == letters[i] - 32)
			       *arr = nums[i] + 48;
		}
		arr++;
	}
	return (arr);
}

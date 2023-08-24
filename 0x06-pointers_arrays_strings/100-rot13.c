#include "main.h"

/**
 * *rot13 - function prints rot13 coded string
 *
 * @arr: parameter that taken to be checked
 *
 * Return: arr
 */

char *rot13(char *arr)
{
	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*arr)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*arr == rot[i])
			{
				*arr = ROT[i];
				break;
			}
		}
		arr++;

	}
	return (arr);
}

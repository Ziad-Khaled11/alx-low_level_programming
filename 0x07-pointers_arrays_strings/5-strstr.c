#include "main.h"

/**
 * *_strstr - function prints
 *
 * @haystack: parameter that taken to be checked
 * @needle: parameter that taken to be checked
 *
 * Return: first occurance of sub string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
			return (haystack + i);
	}
	return ('\0');
}

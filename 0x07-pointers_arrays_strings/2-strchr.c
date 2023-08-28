#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * *_strchr - function search for a char
 *
 * @s: parameter that taken to be checked
 * @c: parameter that taken to be checked
 *
 * Return: Returns first occurrence of the char c in the string s,or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

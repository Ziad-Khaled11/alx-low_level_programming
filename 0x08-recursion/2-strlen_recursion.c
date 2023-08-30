#include "main.h"

/**
 * _strlen_recursion - function prints length of string
 *
 * @s: parameter that taken to be checked
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
		i += _strlen_recursion(s + 1) + 1;
	return (i);
}

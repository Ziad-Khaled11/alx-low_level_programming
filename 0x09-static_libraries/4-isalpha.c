#include "main.h"

/**
 * _isalpha - function print checks alphapet letters
 *
 * @c: parameter taken to be checked
 *
 * Return: 1 if alphapet , 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

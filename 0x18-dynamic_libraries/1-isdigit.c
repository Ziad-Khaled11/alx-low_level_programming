#include "main.h"

/**
 * _isdigit - function prints the digits betwwen 0 to 9
 *
 * @c: parameter that taken to be checked
 *
 * Return: 1 if digit , 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

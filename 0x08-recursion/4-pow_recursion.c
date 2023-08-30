#include "main.h"

/**
 * _pow_recursion - function prints power of x
 *
 * @x: parameter that taken to be checked
 * @y: parameter that taken to be checked
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

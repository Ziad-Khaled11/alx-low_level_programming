#include "main.h"

/**
 * _abs - function prints absolute of number
 *
 * @n: parameter that taken to be checked
 *
 * Return: absoluted number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

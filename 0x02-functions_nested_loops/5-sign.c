#include "main.h"

/**
 * print_sign - function prints
 *
 * @n: parameter that taken to be checked
 *
 * Return: 1 if post , 0 if zero , -1 if negt
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

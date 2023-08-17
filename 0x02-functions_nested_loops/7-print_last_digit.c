#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function prints
 *
 * @n: parameter that taken to be checked
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
	last = n % 10;
	_putchar(last + '0');
	}
	else
	{
		last = (n * -1) % 10;
		_putchar(last + '0');
	}
	return (last);
}

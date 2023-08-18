#include "main.h"

/**
 * print_number - function prints number
 *
 * @n: parameter that taken to be checked
 */

void print_number(int n)
{
	int reversed, co;

	reversed = 0;
	co = 0;

	if (n > 0)
	{
	while (n != 0)
	{
		reversed = (reversed * 10) + n % 10;
		n /= 10;
	}
	while (reversed != 0)
	{
		_putchar((reversed % 10) + '0');
		reversed /= 10;
	}
	}
	else if (n == 0)
		_putchar(48);
	else
	{
		n = n * -1;
		while (n != 0)
		{
			reversed = (reversed * 10) + n % 10;
			n /= 10;
		}
		while (reversed != 0)
		{
			if (co < 1)
				_putchar(45);
			_putchar((reversed % 10) + '0');
			reversed /= 10;
			co++;
		}
	}
}

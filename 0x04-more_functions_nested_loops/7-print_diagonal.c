#include "main.h"

/**
 * print_diagonal - function prints
 *
 * @n: parameter that taken to be checked
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}

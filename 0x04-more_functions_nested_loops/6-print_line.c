#include "main.h"

/**
 * print_line - function prints a straight line
 *
 * @n: parameter that taken to be checked
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}

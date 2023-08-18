#include "main.h"

/**
 * print_triangle - function prints
 *
 * @size: parameter that taken to be checked
 */

void print_triangle(int size)
{
	int i, j, k, temp;

	temp = size;
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < temp; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		temp--;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

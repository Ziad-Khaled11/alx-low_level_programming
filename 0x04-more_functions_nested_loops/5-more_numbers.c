#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function prints 1 to 14 10 times
 *
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar(49);
				k = j % 10;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}

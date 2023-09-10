#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints print to 98
 *
 * @n: parameter that taken to be checked
 *
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
	}
	else if (n == 98)
		printf("%d", 98);
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	putchar('\n');
}

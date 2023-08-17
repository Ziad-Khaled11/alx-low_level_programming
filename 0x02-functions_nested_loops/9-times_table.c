#include "main.h"
#include <stdio.h>

/**
 * times_table - function prints the times table
 *
 */

void times_table(void)
{
	int i, j, temp, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			temp = i * j;
			printf("%d", temp);
			k = j + 1;
			if (j != 9)
			{
				if (k * i > 9)
					printf(", ");
				else
					printf(",  ");
			}

		}
		putchar('\n');
	}
}

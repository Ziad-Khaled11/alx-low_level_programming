#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function prints chessboard
 *
 * @a: parameter that taken to be checked
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		putchar('\n');
	}
}

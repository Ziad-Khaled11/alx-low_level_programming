#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints sum of the diagonal
 *
 * @a: parameter that taken to be checked
 * @size: parameter that taken to be checked
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i];
		sum2 = sum2 + a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}

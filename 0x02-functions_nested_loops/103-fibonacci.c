#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C code prints first 50 fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int first = 1, second = 2, next, sum;
	int i;

	sum = 0;
	for (i = 2; i < 34; i++)
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
	}
	printf("%ld", sum + 2);
	putchar('\n');

	return (0);
}

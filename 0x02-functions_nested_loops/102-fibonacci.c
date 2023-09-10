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
	long int first = 1, second = 2, next;

	int i;

	printf("%ld, %ld%s", first, second, ", ");

	for (i = 2; i < 50; i++)

	{
		next = first + second;
		printf("%ld", next);
		if (i < 49)
			printf(", ");
		first = second;
		second = next;
	}

	putchar('\n');

	return (0);
}

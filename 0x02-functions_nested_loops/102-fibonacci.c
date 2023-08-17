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
	long int N, first = 1, second = 2, next;

	printf("%ld, %ld%s", first, second, ", ");

	for (int i = 2; i < 50; i++)

	{
		next = first + second;
		printf("%ld", next);
		if (i < 49)
			printf(", ");
		first = second;
		second = next;
	}

	putchar('\n');
}

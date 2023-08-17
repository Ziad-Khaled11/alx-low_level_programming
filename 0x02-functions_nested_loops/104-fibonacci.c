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
	unsigned long int first = 1, second = 2, next;

	int i;

	printf("%lu, %lu%s", first, second, ", ");

	for (i = 2; i < 98; i++)

	{
		next = first + second;
		printf("%ld", next);
		if (i < 97)
			printf(", ");
		first = second;
		second = next;
	}

	putchar('\n');

	return (0);
}

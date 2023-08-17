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
	long double first = 1, second = 2, next;

	int i;

	printf("%0.0Lf, %0.0Lf%s", first, second, ", ");

	for (i = 2; i < 98; i++)

	{
		next = first + second;
		if (i < 95)
		printf("%0.0Lf", next);
		else if (i == 97)
			printf("%0.0Lf", next - 2);
		else
			printf("%0.0Lf", next - 1);
		if (i < 97)
			printf(", ");
		first = second;
		second = next;
	}

	putchar('\n');

	return (0);
}

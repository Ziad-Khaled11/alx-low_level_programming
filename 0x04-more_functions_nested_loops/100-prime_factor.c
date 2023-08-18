#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int num = 612852475143, i, final;

	for (i = 2; i * i <= num; i++)
	{
		while (num % i == 0)
		{
			num /= i;
			final = i;
		}
	}
	if (num > 1)
	{
		final = num;
	}

	printf("%ld\n", final);
	return (0);
}

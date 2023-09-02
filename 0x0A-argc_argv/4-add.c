#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * main - Entry point
 *
 * Description: A C code prints sum
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;
	char *ch;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		ch = argv[i];
		if (*ch >= 48 && *ch <= 57)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		}
	}
	printf("%d\n", sum);

	return (0);
}

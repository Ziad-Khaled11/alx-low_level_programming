#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A C code prints multiple
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 (Success) or 1 (Failure)
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}

	return (0);
}

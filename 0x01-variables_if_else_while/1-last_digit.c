#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code prints last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d%s", n, x, " and is less than 6 and not 0\n");
	}
	else if (x == 0)
	{
		printf("Last digit of %d%s%d%s", n, " is ", x, " and is zero\n");
	}
	else
	{
		printf("Last digit of %d%s%d%s", n, " is ", x, " and is greater than 5\n");
	}

	return (0);
}

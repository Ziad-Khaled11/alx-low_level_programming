#include "main.h"

/**
 * factorial - function prints factorial of num
 *
 * @n: parameter that taken to be checked
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * _sqrt_recursion - function prints square root of num
 *
 * @n: parameter that taken to be checked
 *
 * Return: square root
 */


int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - function prints square
 *
 * @n: parameter that taken to be checked
 * @val: parameter that taken to be checked
 *
 * Return: square
 */
int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
return (-1);
}

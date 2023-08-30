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
#include "main.h"

/**
 * sq - function prints square
 *
 * @n: parameter that taken to be checked
 * @val: parameter that taken to be checked
 *
 * Return: square
 */
int sq(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (sq(n, val + 1));
e1se
return (-1);
}

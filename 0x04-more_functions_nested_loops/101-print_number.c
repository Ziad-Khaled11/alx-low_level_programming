#include "main.h"

/**
 * print_number - function prints number
 *
 * @n: parameter that taken to be checked
 */

void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);
_putchar ((num % 10) + 48);
}

#include "main.h"

/**
 * print_times_table - function prints the times table
 *
 * @n: parameter that taken to be checked
 *
 */

void print_times_table(int n)
{
int i, j, temp, l;

if (n != 100)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
temp = i * j;
printf("%d", temp);
l = j + 1;
if (j != n)
{
if (l *i > 9 && l *i < 100)
printf(",  ");
else if (l *i >= 100)
printf(", ");
else
printf(",   ");
}
}
putchar('\n');
}
}
}

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

for (i = 0; i <= n; i++)
{
for (j = 0; j <= 9; j++)
{
temp = i * j;
printf("%d", temp);
l = j + 1;
if (j != 9)
{
if (l *i > 9)
printf(",  ");
else
printf(",   ");
}
}
putchar('\n');
}
}


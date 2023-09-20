#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 *
 * @separator: parameter that taken to be checked
 * @n: parameter that taken to be checked
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s = (char *)separator, *temp;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{

		temp = va_arg(ap, char *);
		if (temp)
		printf("%s", temp);
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", s);
		}
	}
	putchar('\n');
	va_end(ap);
}

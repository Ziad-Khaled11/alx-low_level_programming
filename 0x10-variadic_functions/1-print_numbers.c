#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers
 *
 * @separator: parameter that taken to be checked
 * @n: parameter that taken to be checked
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list ap;

	s = (char *)separator;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
		{
			printf("%s ", s);
		}
	}
	putchar('\n');
	va_end(ap);
}

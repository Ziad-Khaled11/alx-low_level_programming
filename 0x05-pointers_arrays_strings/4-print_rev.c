#include "main.h"

/**
 * print_rev - function prints
 *
 * @s: parameter that taken to be checked
 */

void print_rev(char *s)
{
	int i;

	rev_string(s);
	for (i = 0; s != '0'; s++)
	{
		_putchar(*s);
	}
}

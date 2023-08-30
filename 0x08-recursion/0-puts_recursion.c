#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function prints a string
 *
 * @s: parameter that taken to be checked
 *
 */

void _puts_recursion(char *s)
{	
	if (*s)
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
		return;
	}
}

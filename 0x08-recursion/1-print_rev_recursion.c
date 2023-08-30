#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function prints reversed string
 *
 * @s: parameter that taken to be checked
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	printf("%c", *s);
}

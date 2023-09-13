#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function prints
 *
 * @name: parameter that taken to be checked
 * @f: parameter that taken to be checked
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

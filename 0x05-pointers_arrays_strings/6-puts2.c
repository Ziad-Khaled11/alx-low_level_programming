#include "main.h"

/**
 * puts2 - function prints every second character
 *
 * @str: parameter that taken to be checked
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i] + 0);
		i += 2;
	}
}

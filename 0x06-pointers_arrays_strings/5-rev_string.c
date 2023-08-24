#include "main.h"

/**
 * rev_string - function prints reversed string
 *
 * @s: parameter that taken to be checked
 */

void rev_string(char *s)
{
	char sr;
	int co, i;

	for (co = 0; s[co] != '\0'; ++co)
		;
	for (i = 0; i < co / 2; i++)
	{
		sr = s[i];
		s[i] = s[co - 1 - i];
		s[co - 1 - i] = sr;
	}
}

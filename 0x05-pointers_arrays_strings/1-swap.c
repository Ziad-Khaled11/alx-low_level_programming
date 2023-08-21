#include "main.h"

/**
 * swap_int - function swaps two numbers
 *
 * @a: parameter that taken to be checked
 * @b: parameter that taken to be checked
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

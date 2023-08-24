#include "main.h"

/**
 * reverse_array - function prints
 *
 * @a: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 */

void reverse_array(int *a, int n)
{
	int arr[1000], temp, i;

	temp = n - 1;
	for (i = 0; i < n; i++)
	{
		arr[i] = a[temp];
		temp--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}

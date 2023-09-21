#include "lists.h"
#include <stdio.h>

/**
 * list_len - function prints length
 *
 * @h: parameter that taken to be checked
 *
 * Return: struct
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}


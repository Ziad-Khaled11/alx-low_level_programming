#include "lists.h"
#include <stdio.h>

/**
 * add_node - function adds a node
 *
 * @head: parameter that taken to be checked
 * @str: parameter that taken to be checked
 *
 * Return: struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;
	return (*head);
}


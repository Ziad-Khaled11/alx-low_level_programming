#include "lists.h"

/**
 * get_dnodeint_at_index - returns the a node of a dlistint_t linked
 * @head: pointer to head
 * @index: index of the node
 * Return: node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}

#include "lists.h"
#include <stdio.h>

/**
 * free_list - function free the list
 *
 * @head: parameter that taken to be checked
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

#include "lists.h"
/**
 * free_dlistint - Func frees dlistint_t list
 * @head: Head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *u;

	while (head)
	{
		u = head->next;
		free(head);
		head = u;
	}
}

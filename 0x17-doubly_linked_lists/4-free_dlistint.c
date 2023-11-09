#include "lists.h"
/**
 * free_dlistint - Func frees dlistint_t list
 * @head: Head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *u;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((u = head) != NULL)
	{
		head = head->prev;
		free(u);
	}
}

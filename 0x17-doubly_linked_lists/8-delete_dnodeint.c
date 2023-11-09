#include "lists.h"

/**
 * delete_dnodeint_at_index - Func deletes node
 * @head: Head
 * @index: Node index
 *
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *v, *k;
	unsigned int u = 0;

	v = *head;

	if (v != NULL)
		while (v->prev != NULL)
			v = v->prev;
	while (v != NULL)
	{
		if (u == index)
		{
			if (u == 0)
			{
				*head = v->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				k->next = v->next;
				if (v->next != NULL)
					v->next->prev = k;
			}
			free(v);
			return (1);
		}
		k = v;
		v = v->next;
		u++;
	}
	return (-1);
}

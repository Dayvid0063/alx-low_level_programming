#include "lists.h"

/**
 * add_dnodeint_end - Func adds a new node at the end
 * @head: Head
 * @n: Elem. value
 *
 * Return: Elem. address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *u, *v;

	u = malloc(sizeof(dlistint_t));
	if (!u)
		return (NULL);
	u->n = n;
	u->next = NULL;
	v = *head;

	if (v != NULL)
	{
		while (v->next != NULL)
			v = v->next;
		v->next = u;
	}
	else
	{
		*head = u;
	}
	u->prev = v;
	return (u);
}

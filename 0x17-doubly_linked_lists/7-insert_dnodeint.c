#include "lists.h"
/**
 * insert_dnodeint_at_index - Func inserts new node
 * @h: Head
 * @idx: Node index
 * @n: Elem. value
 *
 * Return: Node address, NULL if otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *v = *h;
	dlistint_t *u;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		v = v->next;
		if (!v)
			return (NULL);
	}
	if (v->next == NULL)
		return (add_dnodeint_end(h, n));
	u = malloc(sizeof(dlistint_t));
	if (!u)
		return (NULL);
	u->n = n;
	u->prev = v;
	u->next = v->next;
	v->next->prev = u;
	v->next = u;
	return (u);
}

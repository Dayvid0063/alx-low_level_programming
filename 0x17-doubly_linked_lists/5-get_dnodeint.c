#include "lists.h"
/**
 * get_dnodeint_at_index - Func returns node of a dlistint_t list
 * @head: Head
 * @index: Node index
 *
 * Return: Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int u = 0;
	dlistint_t *v;

	if (!head)
		return (NULL);
	v = head;
	while (v)
	{
		if (index == u)
			return (v);
		u++;
		v = v->next;
	}
	return (NULL);
}

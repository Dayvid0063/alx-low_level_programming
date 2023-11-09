#include "lists.h"
/**
 * dlistint_len - Func returns num of elem. in list
 * @h: Head
 *
 * Return: Node num
 */
size_t dlistint_len(const dlistint_t *h)
{
	int u = 0;

	if (!h)
		return (u);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		u++;
		h = h->next;
	}
	return (u);
}

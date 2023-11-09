#include "lists.h"

/**
 * print_dlistint - Func print dlistint elem.
 * @h: Head
 *
 * Return: Node num
 */
size_t print_dlistint(const dlistint_t *h)
{
	int u = 0;

	if (!h)
		return (u);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		u++;
		h = h->next;
	}
	return (u);
}

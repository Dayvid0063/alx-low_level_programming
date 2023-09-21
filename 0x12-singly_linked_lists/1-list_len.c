#include <stdlib.h>
#include "lists.h"

/**
 * list_len - func returns num in a linked list
 * @h: Ptr to the list
 *
 * Return: Num
 */
size_t list_len(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		g++;
		h = h->next;
	}
	return (g);
}

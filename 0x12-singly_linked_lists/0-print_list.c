#include <stdio.h>
#include "lists.h"

/**
 * print_list - Program prints a linked list
 * @h: ptr to the list
 *
 * Return: Num
 */
size_t print_list(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		u++;
	}

	return (u);
}

#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Func print elements of a listint_t list
 * @h: Listint_t list
 *
 * Return: Nodes num
 */
size_t print_listint(const listint_t *h)
{
size_t y = 0;
while (h)
{
printf("%d\n", h->n);
y++;
h = h->next;
}
return (y);
}

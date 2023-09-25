#include "lists.h"
/**
 * listint_len - func return elements in a linked listint_t list
 * @h: Listint_t list
 *
 * Return: Node num
 */
size_t listint_len(const listint_t *h)
{
size_t y = 0;
while (h)
{
y++;
h = h->next;
}
return (y);
}

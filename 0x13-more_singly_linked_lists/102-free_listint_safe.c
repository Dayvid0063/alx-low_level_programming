#include "lists.h"
/**
 * free_listint_safe - func frees a listint_t list
 * @h: Linked list
 *
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t y = 0;
int u;
listint_t *v;
if (!h || !*h)
return (0);
while (*h)
{
u = *h - (*h)->next;
if (u > 0)
{
v = (*h)->next;
free(*h);
*h = v;
y++;
}
else
{
free(*h);
*h = NULL;
y++;
break;
}
}
*h = NULL;
return (y);
}

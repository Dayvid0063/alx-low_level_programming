#include "lists.h"
/**
 * find_listint_loop - func finds the loop in a linked list
 * @head: listint_t list
 *
 * Return: address of the node,NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *u = head;
listint_t *y = head;
if (!head)
return (NULL);
while (y && u && u->next)
{
u = u->next->next;
y = y->next;
if (u == y)
{
y = head;
while (y != u)
{
y = y->next;
u = u->next;
}
return (u);
}
}
return (NULL);
}

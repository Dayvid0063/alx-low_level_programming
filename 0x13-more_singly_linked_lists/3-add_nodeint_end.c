#include "lists.h"
/**
 * add_nodeint_end - func add a node at the end of a listint_t list
 * @head: Ptr to list
 * @n: New data
 *
 * Return: Ptr to node,NULL if otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *u;
listint_t *v = *head;
u = malloc(sizeof(listint_t));
if (!u)
return (NULL);
u->n = n;
u->next = NULL;
if (*head == NULL)
{
*head = u;
return (u);
}
while (v->next)
v = v->next;
v->next = u;
return (u);
}

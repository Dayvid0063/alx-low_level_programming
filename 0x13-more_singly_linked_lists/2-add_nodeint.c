#include "lists.h"
/**
 * add_nodeint - func add new node at beginning of a listint_t list
 * @head: Ptr to node
 * @n: New node data
 *
 * Return: Ptr to node,NULL if otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *u;
u = malloc(sizeof(listint_t));
if (!u)
return (NULL);
u->n = n;
u->next = *head;
*head = u;
return (u);
}

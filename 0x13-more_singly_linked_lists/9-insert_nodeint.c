#include "lists.h"
/**
 * insert_nodeint_at_index - Func inserts new node at given position
 * @head: Listint_t list
 * @idx: Index list where the new node is  added.Index starts at 0
 * @n: Node data
 *
 * Return: address of the new node, or NULL if otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *u;
listint_t *v = *head;
u = malloc(sizeof(listint_t));
if (!u || !head)
return (NULL);
u->n = n;
u->next = NULL;
if (idx == 0)
{
u->next = *head;
*head = u;
return (u);
}
for (k = 0; v && k < idx; k++)
{
if (k == idx - 1)
{
u->next = v->next;
v->next = u;
return (u);
}
else
v = v->next;
}
return (NULL);
}

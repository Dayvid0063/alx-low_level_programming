#include "lists.h"
/**
 * delete_nodeint_at_index -  func delete node index of a listint_t list
 * @head: listint_t list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int k = 0;
listint_t *v = *head;
listint_t *o = NULL;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(v);
return (1);
}
while (k < index - 1)
{
if (!v || !(v->next))
return (-1);
v = v->next;
k++;
}
o = v->next;
v->next = o->next;
free(o);
return (1);
}

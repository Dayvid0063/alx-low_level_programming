#include "lists.h"
/**
 * get_nodeint_at_index - func return nth node of a listint_t list
 * @head: listint_t list
 * @index: Index of the node, starting at 0
 *
 * Return: If the node does not exist,return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *v = head;
while (v && k < index)
{
v = v->next;
k++;
}
return (v ? v : NULL);
}

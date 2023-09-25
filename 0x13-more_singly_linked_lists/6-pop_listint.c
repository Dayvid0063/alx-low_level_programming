#include "lists.h"
/**
 * pop_listint - Func deletes the head node and return data
 * @head: listint_t list
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
listint_t *v;
int y;
if (!head || !*head)
return (0);
y = (*head)->n;
v = (*head)->next;
free(*head);
*head = v;
return (y);
}

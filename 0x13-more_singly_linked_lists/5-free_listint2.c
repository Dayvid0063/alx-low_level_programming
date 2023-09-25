#include "lists.h"
/**
 * free_listint2 - Func frees a listint_t list
 * @head: Listint_t list
 */
void free_listint2(listint_t **head)
{
listint_t *v;
if (head == NULL)
return;
while (*head)
{
v = (*head)->next;
free(*head);
*head = v;
}
*head = NULL;
}

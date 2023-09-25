#include "lists.h"
/**
 * free_listint - func frees a listint_t list
 * @head: Listint_t list
 */
void free_listint(listint_t *head)
{
listint_t *v;
while (head)
{
v = head->next;
free(head);
head = v;
}
}

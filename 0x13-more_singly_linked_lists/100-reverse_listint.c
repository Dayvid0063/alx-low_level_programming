#include "lists.h"
/**
 * reverse_listint - func reverses a listint_t list
 * @head: listint_t list
 *
 * Return: Ptr to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL;
listint_t *prev = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}

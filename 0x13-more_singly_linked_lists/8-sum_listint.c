#include "lists.h"
/**
 * sum_listint - func return sum of data(n) of a listint_t list
 * @head: listint_t list
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int o = 0;
listint_t *v = head;
while (v)
{
o += v->n;
v = v->next;
}
return (o);
}

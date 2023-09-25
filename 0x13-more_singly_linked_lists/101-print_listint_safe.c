#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Num of nodes
 * @head: Listint_t list
 *
 * Return: Not looped -0,otherwise node num
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *y;
const listint_t *a;
size_t v = 1;
if (head == NULL || head->next == NULL)
return (0);
a = head->next;
y = (head->next)->next;
while (y)
{
if (a == y)
{
a = head;
while (a != y)
{
v++;
a = a->next;
y = y->next;
}
a = a->next;
while (a != y)
{
v++;
a = a->next;
}
return (v);
}
a = a->next;
y = (y->next)->next;
}
return (0);
}
/**
 * print_listint_safe - func prints a listint_t list
 * @head: Listint_t list.
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t v;
size_t g = 0;
v = looped_listint_len(head);
if (v == 0)
{
for (; head != NULL; v++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (g = 0; g < v; g++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (v);
}

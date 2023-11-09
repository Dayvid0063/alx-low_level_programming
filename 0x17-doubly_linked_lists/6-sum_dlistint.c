#include "lists.h"
/**
 * sum_dlistint - Func returns data sum
 * @head: Head
 *
 * Return: Data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

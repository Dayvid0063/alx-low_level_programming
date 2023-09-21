#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Func adds a new node
 * @head: Double ptr
 * @str: String
 *
 * Return: Address,or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	t = malloc(sizeof(list_t));
	if (!t)
		return (NULL);

	t->str = strdup(str);
	t->len = len;
	t->next = NULL;

	if (*head == NULL)
	{
		*head = t;
		return (t);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = t;

	return (t);
}

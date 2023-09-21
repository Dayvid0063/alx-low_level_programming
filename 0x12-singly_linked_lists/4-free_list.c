#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Func frees a linked list
 * @head: Head
 */
void free_list(list_t *head)
{
	list_t *u;

	while (head)
	{
		u = head->next;
		free(head->str);
		free(head);
		head = u;
	}
}

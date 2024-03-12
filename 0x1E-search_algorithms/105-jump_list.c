#include "search_algos.h"

/**
 * jump_list - Func searches for a value in a sorted list
 * @list: Ptr to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: The value to search for
 *
 * Return: Ptr to the first node, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *current = list, *prev = NULL;
	listint_t *next_jump = current;

	if (!list)
		return (NULL);

	while (current && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && next_jump; i++)
		{
			prev = next_jump;
			next_jump = next_jump->next;
		}
		current = next_jump;

		if (current)
			printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
	}

	if (current && current->n == value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, current->index);
		return (current);
	}
	else if (prev)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, current ? current->index : size - 1);
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
	}

	return (NULL);
}

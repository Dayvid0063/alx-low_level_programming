#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - func reallocates a memory block using free and malloc
 * @ptr: pointer to allocated memory
 * @old_size: allocated size of memory
 * @new_size: new size of memory
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r;
	char *t;
	unsigned int u;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	r = malloc(new_size);
	if (!r)
		return (NULL);

	t = ptr;

	if (new_size < old_size)
	{
		for (u = 0; u < new_size; u++)
			r[u] = t[u];
	}

	if (new_size > old_size)
	{
		for (u = 0; u < old_size; u++)
			r[u] = t[u];
	}

	free(ptr);
	return (r);
}

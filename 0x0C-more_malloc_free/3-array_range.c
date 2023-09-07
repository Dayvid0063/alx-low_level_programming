#include <stdlib.h>
#include "main.h"
/**
 * *array_range - func creates an array of int
 * @min: minimum stored values
 * @max: maximum stored values
 *
 * Return: a pointer to array
 */
int *array_range(int min, int max)
{
	int *t;
	int u, e;

	if (min > max)
		return (NULL);

	e = max - min + 1;

	t = malloc(sizeof(int) * e);

	if (t == NULL)
		return (NULL);

	for (u = 0; min <= max; u++)
		t[u] = min++;

	return (t);
}

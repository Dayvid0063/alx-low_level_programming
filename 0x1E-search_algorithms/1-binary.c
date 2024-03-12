#include "search_algos.h"

/**
 * r_search - Func recursively searches for a value in a sorted array
 * @array: input array
 * @begin: starting index
 * @end: ending index
 * @value: value to search for
 * Return: Index of the value if found, -1 otherwise
 */
int r_search(int *array, size_t begin, size_t end, int value)
{
	size_t c, u;

	if (begin > end)
		return (-1);

	c = begin + (end - begin) / 2;

	printf("Searching in array:");
	for (u = begin; u <= end; u++)
		printf("%s %d", (u == begin) ? "" : ",", array[u]);
	printf("\n");

	if (array[c] == value)
		return (c);

	if (array[c] > value)
		return (r_search(array, begin, c - 1, value));

	return (r_search(array, c + 1, end, value));
}

/**
 * binary_search - Func calls r_search to return the index
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: Index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (r_search(array, 0, size - 1, value));
}

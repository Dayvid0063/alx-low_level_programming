#include "search_algos.h"

/**
 * r_search - Func recursively searches for a value in a sorted array
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: Num of the value if found, -1 otherwise
 */
int r_search(int *array, size_t size, int value)
{
	size_t v = size / 2;
	size_t u;
	int s_res;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array:");

	for (u = 0; u < size; u++)
		printf("%s %d", (u == 0) ? "" : ",", array[u]);

	printf("\n");

	if (value == array[v])
		return (v);

	if (value < array[v])
		return (r_search(array, v, value));

	s_res = r_search(array + v + 1, size - v - 1, value);
	return (s_res == -1 ? -1 : (int)v + 1 + s_res);
}

/**
 * binary_search - Func calls r_search to return the index
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: Num of the value if found,-1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	return (r_search(array, size, value));
}

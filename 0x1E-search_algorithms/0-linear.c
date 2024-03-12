#include "search_algos.h"

/**
 * linear_search - Func searches for a value in an array of integers
 * @array: Ptr to the first element of the array to search in
 * @size: Num of elements in array
 * @value: Value to search for
 *
 * Return: Num of the first occurrence, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int v;

	if (!array)
		return (-1);

	for (v = 0; v < (int)size; v++)
	{
		printf("Value checked array[%u] = [%d]\n", v, array[v]);
		if (value == array[v])
			return (v);
	}
	return (-1);
}

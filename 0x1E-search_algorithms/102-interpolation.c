#include "search_algos.h"

/**
 * interpolation_search - Func earches for a value in a sorted array of int
 * @array: Ptr to the first element of the array to search in
 * @size: Num of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t u, v, i;

	if (!array)
		return (-1);

	for (v = 0, i = size - 1; i >= v;)
	{
		u = v + (((double)(i - v) / (array[i] - array[v])) * (value - array[v]));
		if (u < size)
			printf("Value checked array[%ld] = [%d]\n", u, array[u]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", u);
			break;
		}
		if (array[u] == value)
			return (u);
		if (array[u] > value)
			i = u - 1;
		else
			v = u + 1;
	}
	return (-1);
}

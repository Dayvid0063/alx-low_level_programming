#include "search_algos.h"

/**
 * jump_search - Func searches for a value in a sorted array of integers
 * @array: Ptr to the first element of the array to search in
 * @size: Num of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t u = 0, v = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	while ((v < size) && (*(array + v) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)v, *(array + v));
		u = v;
		v += step;
		if (u >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)u, (int)v);
	v = v >= size ? size - 1 : v;

	for (; (u <= v) && (*(array + u) <= value); u++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)u, *(array + u));
		if (*(array + u) == value)
			return ((int)u);
	}
	return (-1);
}

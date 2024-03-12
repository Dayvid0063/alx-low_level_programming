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
	size_t c = (begin + end) / 2;
	size_t u;

	if (begin <= end)
	{
		printf("Searching in array:");
		for (u = begin; u <= end; u++)
			printf("%s %d", (u == begin) ? "" : ",", array[u]);
		printf("\n");

		if (value == array[c])
		{
			if (c > 0 && array[c - 1] == value)
				return (r_search(array, begin, c, value));
			return (c);
		}

		if (value < array[c])
			return (r_search(array, begin, c, value));
		else
			return (r_search(array, c + 1, end, value));
	}

	return (-1);
}

/**
 * advanced_binary - Func searches for a value in a sorted array
 * @array: Ptr to the first element of the array to search in
 * @size: Numb of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (r_search(array, 0, size - 1, value));
}

#include "search_algos.h"

/**
 * b_search - Searches for a value in a sorted array via binary search
 * @array: Ptr to the first element of the array to search in
 * @begin: Starting index
 * @end: Ending index
 * @value: The value to search for
 *
 * Return: The index where the value is located, -1 Otherwise
 */
int b_search(int *array, size_t begin, size_t end, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (end >= begin)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = begin + (end - begin) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			begin = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Func searches for a value in a sorted array
 * @array: Ptr to the first element of the array to search in
 * @size: Num of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, -1 Otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t u = 0, end;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (u = 1; u < size && array[u] <= value; u = u * 2)
			printf("Value checked array[%ld] = [%d]\n", u, array[u]);
	}

	end = u < size ? u : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", u / 2, end);
	return (b_search(array, u / 2, end, value));
}

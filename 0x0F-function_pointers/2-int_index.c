#include "function_pointers.h"
/**
 * int_index - return index of the first element
 * @array: ar
 * @size: num of elements in array
 * @cmp: ptr to func to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int u;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (u = 0; u < size; u++)
{
if (cmp(array[u]))
return (u);
}
return (-1);
}

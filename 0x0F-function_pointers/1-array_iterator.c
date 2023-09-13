#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - func that executes func as a param
 * @array: ar
 * @size: element size
 * @action: ptr to print
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int u;
if (array == NULL || action == NULL)
return;
for (u = 0; u < size; u++)
{
action(array[u]);
}
}

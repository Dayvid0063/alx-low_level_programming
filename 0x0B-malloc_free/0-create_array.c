#include "main.h"
#include <stdlib.h>
/**
 * create_array - func creates array of chars, and initializes
 * @c: assigned char
 * @size: array size
 *
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
if (size == 0 || array == 0)
return (NULL);
while (size--)
array[size] = c;
return (array);
}

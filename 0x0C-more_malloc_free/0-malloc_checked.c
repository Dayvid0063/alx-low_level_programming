#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - func allocates memory using malloc
 * @b: num of bytes allocated
 *
 * Return: a pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

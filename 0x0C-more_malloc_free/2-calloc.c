#include <stdlib.h>
#include "main.h"
/**
 * *_memset - memory constant byte
 * @s: section of memory filled
 * @b: copied char
 * @n: num of times to copy char
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
/**
 * *_calloc - func allocates memory for an array using malloc
 * @nmemb: num of elements
 * @size: every element size
 *
 * Return: a pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

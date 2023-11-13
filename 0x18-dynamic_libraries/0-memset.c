#include "main.h"
/**
 * _memset - filled memory block with specific value
 * @s: memory being filled start address
 * @b: Wanted value
 * @n: num of bytes being changed
 *
 * Return: Array changed with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int u = 0;

	for (u = 0; n > 0; u++)
	{
		s[u] = b;
		n--;
	}
	return (s);
}

#include "main.h"
/**
 *_memcpy - func that copies the area of memory
 *@dest: stored memory
 *@src: copied memory
 *@n: bytes num
 *
 *Return: memory copied with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int u = n;

	for (v = 0; v < u; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}

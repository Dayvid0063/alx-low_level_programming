#include "main.h"
/**
 * _memcpy - func that copies memory area
 * @dest: memory stored
 * @src: memory copied
 * *@n: num of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int o = 0;
int u = n;
for (; o < u; o++)
{
dest[o] = src[o];
n--;
}
return (dest);
}

#include "main.h"
/**
 * _memset - func fills memory with a constant byte
 * @s: start address of memory filled
 * @b: desired value
 * @n: num of bytes changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int u = 0;
for (; n > 0; u++)
{
s[u] = b;
n--;
}
return (s);
}

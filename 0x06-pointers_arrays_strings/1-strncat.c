#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int u;
int h;
u = 0;
while (dest[u] != '\0')
{
u++;
}
h = 0;
while (h < n && src[h] != '\0')
{
dest[u] = src[h];
u++;
h++;
}
dest[u] = '\0';
return (dest);
}

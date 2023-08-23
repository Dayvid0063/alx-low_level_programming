#include "main.h"
/**
 * _strcat - func that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int u;
int h;
u = 0;
while (dest[u] != '\0')
{
u++;
}
h = 0;
while (src[h] != '\0')
{
dest[u] = src[h];
u++;
h++;
}
dest[u] = '\0';
return (dest);
}

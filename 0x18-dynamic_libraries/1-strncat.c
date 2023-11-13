#include "main.h"
/**
 * _strncat - func that concatenate two str
 * @dest: value being entered
 * @src: value being inputed
 * @n: value input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int u;
	int k;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[u] = src[k];
		u++;
		k++;
	}
	dest[u] = '\0';
	return (dest);
}

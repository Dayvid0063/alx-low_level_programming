#include "main.h"
/**
 * _strcat - func concatenates two str
 * @dest: value entered
 * @src: value input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int u;
	int k;

	u = 0;

	while (dest[u] != '\0')
	{
		u++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[u] = src[k];
		u++;
		k++;
	}
	dest[u] = '\0';
	return (dest);
}

#include "main.h"

/**
 * char *_strcpy - func copies str pointed to by src
 * @dest: copied to
 * @src: copied from
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int u = 0;
	int p = 0;

	while (*(src + u) != '\0')
	{
		u++;
	}
	for (p = 0 ; p < u ; p++)
	{
		dest[p] = src[p];
	}
	dest[u] = '\0';
	return (dest);
}

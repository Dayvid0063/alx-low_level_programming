#include "main.h"

/**
 * char *_strcpy - func copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int k = 0;
int c = 0;
while (*(src + k) != '\0')
{
k++;
}
for ( ; c < k ; c++)
{
dest[c] = src[c];
}
dest[k] = '\0';
return (dest);
}

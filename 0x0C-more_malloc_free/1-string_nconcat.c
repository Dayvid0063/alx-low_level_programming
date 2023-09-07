#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - func that concatenates two str
 * @s1: str to insert
 * @s2: str to concatenate
 * @n: num of bytes
 *
 * Return: pointer to str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *d;
unsigned int u = 0, k = 0, p1 = 0, p2 = 0;
while (s1 && s1[p1])
p1++;
while (s2 && s2[p2])
p2++;
if (n < p2)
d = malloc(sizeof(char) * (p1 + n + 1));
else
d = malloc(sizeof(char) * (p1 + p2 + 1));
if (!d)
return (NULL);
while (u < p1)
{
d[u] = s1[u];
u++;
}
while (n < p2 && u < (p1 + n))
d[u++] = s2[k++];
while (n >= p2 && u < (p1 + p2))
d[u++] = s2[k++];
d[u] = '\0';
return (d);
}

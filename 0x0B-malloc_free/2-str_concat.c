#include <stdlib.h>
#include "main.h"
/**
 * str_concat - func concatenates two str
 * @s1: concatenate str one
 * @s2: concatenate str two
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *w;
unsigned int u = 0, v = 0, k = 0, h = 0;
while (s1 && s1[k])
k++;
while (s2 && s2[h])
h++;
w = malloc(sizeof(char) * (k + h + 1));
if (w == NULL)
return (NULL);
u = 0;
v = 0;
if (s1)
{
while (u < k)
{
w[u] = s1[u];
u++;
}
}
if (s2)
{
while (u < (k + h))
{
w[u] = s2[v];
u++;
v++;
}
}
w[u] = '\0';
return (w);
}

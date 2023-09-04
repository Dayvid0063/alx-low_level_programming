#include <stdlib.h>
#include "main.h"
/**
 * count_word - func to count the num of words in a str
 * @s: evaluate str
 *
 * Return: num of words
 */
int count_word(char *s)
{
int u, v, x;
u = 0;
x = 0;
for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == ' ')
u = 0;
else if (u == 0)
{
u = 1;
x++;
}
}
return (x);
}
/**
 * **strtow - split str into words
 * @str: split str
 *
 * Return: pointer to an array of str (Success) or NULL (Error)
 */
char **strtow(char *str)
{
char **i, *p;
int u, h = 0, n = 0, s, q = 0, t, d;
while (*(str + n))
n++;
s = count_word(str);
if (s == 0)
return (NULL);
i = (char **) malloc(sizeof(char *) * (s + 1));
if (i == NULL)
return (NULL);
for (u = 0; u <= n; u++)
{
if (str[u] == ' ' || str[u] == '\0')
{
if (q)
{
d = u;
p = (char *) malloc(sizeof(char) * (q + 1));
if (p == NULL)
return (NULL);
while (t < d)
*p++ = str[t++];
*p = '\0';
i[h] = p - q;
h++;
q = 0;
}
}
else if (q++ == 0)
t = u;
}
i[h] = NULL;
return (i);
}

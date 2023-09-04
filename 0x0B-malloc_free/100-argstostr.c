#include <stdlib.h>
#include "main.h"
/**
 * argstostr - func concatenates all the arguments
 * @ac: integer entered
 * @av: pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int u, v, w = 0, x = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (u = 0; u < ac; u++)
{
for (v = 0; av[u][v]; v++)
x++;
}
x += ac;
str = malloc(sizeof(char) * x + 1);
if (str == NULL)
return (NULL);
for (u = 0; u < ac; u++)
{
for (v = 0; av[u][v]; v++)
{
str[w] = av[u][v];
w++;
}
if (str[w] == '\0')
{
str[w++] = '\n';
}
}
return (str);
}

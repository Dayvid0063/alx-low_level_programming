#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - func concatenates all the arguments
 * @ac: arguments num
 * @av: arguments array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int u, v, w, x;
char *y;
if (ac == 0 || av == NULL)
return (NULL);
for (u = 0; u < ac; u++)
{
for (v = 0; av[u][v] != '\0'; v++)
x++;
x++;
}
y = malloc(sizeof(char) * (x + 1));
if (y == NULL)
return (NULL);
w = 0;
for (u = 0; u < ac; u++)
{
for (v = 0; av[u][v] != '\0'; v++)
{
y[x] = av[u][v];
w++;
}
y[w] = '\n';
w++;
}
return (y);
}

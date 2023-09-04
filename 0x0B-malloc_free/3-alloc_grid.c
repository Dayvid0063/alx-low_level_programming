#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - func returns pointer to a 2 dimensional array of int
 * @width: width entered
 * @height: height entered
 *
 * Return: pointer to two dimentional array
 */
int **alloc_grid(int width, int height)
{
int **m;
int u, k;
if (width <= 0 || height <= 0)
return (NULL);
m = malloc(sizeof(int *) * height);
if (m == NULL)
return (NULL);
for (u = 0; u < height; u++)
{
m[u] = malloc(sizeof(int) * width);
if (m[u] == NULL)
{
for (u = 0; u >= 0; u--)
free(m[u]);
free(m);
return (NULL);
}
}
for (u = 0; u < height; u++)
{
for (k = 0; k < width; k++)
m[u][k] = 0;
}
return (m);
}

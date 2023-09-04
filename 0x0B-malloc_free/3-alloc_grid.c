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
int **ar;
int u, k;
if (height <= 0 || width <= 0)
return (NULL);
ar = (int **) malloc(sizeof(int *) * height);
if (ar == NULL)
return (NULL);
for (u = 0; u < height; u++)
{
ar[u] = (int *) malloc(sizeof(int) * width);
if (ar[u] == NULL)
{
free(ar);
for (k = 0; k <= u; k++)
free(ar[k]);
return (NULL);
}
}
for (u = 0; u < height; u++)
{
for (k = 0; k < width; k++)
{
ar[u][k] = 0;
}
}
return (ar);
}

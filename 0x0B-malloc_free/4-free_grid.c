#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory allocated for the grid
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: Null
 */
void free_grid(int **grid, int height)
{
int u;
if (grid == NULL || height == 0)
return;
for (u = 0; u < height; u++)
free(grid[u]);
free(grid);
}

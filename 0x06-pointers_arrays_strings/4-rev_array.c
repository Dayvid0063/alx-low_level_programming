#include "main.h"
/**
 * reverse_array - func reverse content of an array of integers
 * @a: array
 * @n: num of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int u;
int w;
for (u = 0; u < n--; u++)
{
w = a[u];
a[u] = a[n];
a[n] = w;
}
}

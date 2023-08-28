#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int m, u, t;
m = 0;
u = 0;
for (t = 0; t < size; t++)
{
m = m + a[t * size + t];
}
for (t = size - 1; t >= 0; t--)
{
u += a[t * size + (size - t - 1)];
}
printf("%d, %d\n", m, u);
}

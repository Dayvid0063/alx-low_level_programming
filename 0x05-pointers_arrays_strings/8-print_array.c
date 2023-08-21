#include "main.h"

/**
 * print_array - func that prints n elements of an array of int then new line
 * @a: name array
 * @n: is the num of elements of the array printed
 * Return: a and n input
 */
void print_array(int *a, int n)
{
int u;
for (u = 0; u < (n - 1); u++)
{
printf("%d, ", a[u]);
}
if (u == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}

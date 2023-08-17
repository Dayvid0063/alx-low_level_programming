#include "main.h"

/**
 * print_diagonal - function draws a diagonal line
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int p, u;

for (p = 0 ; p < n ; p++)
{
for (u = 0 ; u < n ; u++)
{
if (u == p)
_putchar('\\');
else if (u < p)
_putchar(' ');
}
_putchar('\n');
}
}
}

#include "main.h"

/**
 * print_line - function draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int u;

for (u = 1 ; u <= n ; u++)
{
_putchar('_');
}
_putchar('\n');
}
}

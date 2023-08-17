#include "main.h"

/**
 * print_square - function print square
 * @size: size of square
 * Description: only use _putchar to print, Use # to print square
 */

void print_square(int size)
{
int y, u;
u = 0;

if (size < 1)
_putchar('\n');

while (u < size)
{
y = 0;
while (y < size)
{
_putchar('#');
y++;
}
_putchar('\n');
u++;
}
}

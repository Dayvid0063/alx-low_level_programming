#include "main.h"
/**
 * _pow - Base power
 * @base: Base
 * @power: The power
 *
 * Return: Value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int v;
unsigned int u;
v = 1;
for (u = 1; u <= power; u++)
v *= base;
return (v);
}
/**
 * print_binary - func print binary representation of a num
 * @n: Num
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int y;
unsigned long int h;
char a = 0;
y = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (y != 0)
{
h = n & y;
if (h == y)
{
a = 1;
_putchar('1');
}
else if (a == 1 || y == 1)
{
_putchar('0');
}
y >>= 1;
}
}

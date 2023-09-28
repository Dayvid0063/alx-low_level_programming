#include "main.h"
/**
 * flip_bits - func return num of bit needed to flip
 * @n: Num
 * @m: second number
 *
 * Return: Num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int u;
int h = 0;
unsigned long int g;
unsigned long int f = n ^ m;
for (u = 63; u >= 0; u--)
{
g = f >> u;
if (g & 1)
h++;
}
return (h);
}

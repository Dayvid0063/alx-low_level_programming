#include "main.h"
#include <stdio.h>
/**
 * print_buffer - func that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int r, k, w;
r = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (r < size)
{
k = size - r < 10 ? size - r : 10;
printf("%08x: ", r);
for (w = 0; w < 10; w++)
{
if (w < k)
printf("%02x", *(b + r + w));
else
printf("  ");
if (w % 2)
{
printf(" ");
}
}
for (w = 0; w < k; w++)
{
int c = *(b + r + w);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
r += 10;
}
}

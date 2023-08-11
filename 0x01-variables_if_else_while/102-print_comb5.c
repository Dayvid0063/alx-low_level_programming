#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int t, y;
for (t = 0 ; t <= 98 ; t++)
{
for (y = t + 1 ; t <= 99 ; y++)
{
putchar((t / 10) + '0');
putchar((t % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
if (t == 98 && y == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

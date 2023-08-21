#include "main.h"
/**
 * print_rev - func that prints a string,in reverse,then a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int w = 0;
int u;
while (*s != '\0')
{
w++;
s++;
}
s--;
for (u = w ; u > 0 ; u--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

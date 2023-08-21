#include "main.h"
/**
 *  puts2 - prints every other char of a string,from first char to new line
 *  @str: input
 *  Return: print
 */
void puts2(char *str)
{
int w = 0;
int y = 0;
char *u = str;
int v;
while (*u != '\0')
{
u++;
w++;
}
y = w - 1;
for (v = 0 ; v <= y ; v++)
{
if (v % 2 == 0)
{
_putchar(str[v]);
}
}
_putchar('\n');
}

#include "main.h"
/**
 * puts_half - func that prints half of a string then a new line
 * @str: input
 * Return: half input
 */
void puts_half(char *str)
{
int b, m, l;
l = 0;
for (b = 0; str[b] != '\0'; b++)
l++;
m = (l / 2);
if ((l % 2) == 1)
m = ((l + 1) / 2);
for (b = m; str[b] != '\0'; b++)
_putchar(str[b]);
_putchar('\n');
}

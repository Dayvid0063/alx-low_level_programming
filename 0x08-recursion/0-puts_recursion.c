#include "main.h"
/**
 * _puts_recursion - func prints a str and a new line
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}

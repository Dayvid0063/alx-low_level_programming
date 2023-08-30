#include "main.h"
/**
 * _strlen_recursion - Func returns the string length
 * @s: Measured string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
int t = 0;
if (*s)
{
t++;
t += _strlen_recursion(s + 1);
}
return (t);
}

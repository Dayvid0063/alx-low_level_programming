#include "main.h"
int check_pal(char *s, int u, int m);
int _strlen_recursion(char *s);
/**
 * is_palindrome - func check if a str is a palindrome
 * @s: reverse str
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - return str length
 * @s: calculate the str length
 *
 * Return: length of the str
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the char recursively for palindrome
 * @s: check str
 * @u: iterator
 * @m: length of the str
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int u, int m)
{
if (*(s + u) != *(s + m - 1))
return (0);
if (u >= m)
return (1);
return (check_pal(s, u + 1, m - 1));
}

#include "main.h"
/**
 * _strcmp - function that compare two strings
 * @s1: value input
 * @s2: value input
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int f;
f = 0;
while (s1[f] != '\0' && s2[f] != '\0')
{
if (s1[f] != s2[f])
{
return (s1[f] - s2[f]);
}
f++;
}
return (0);
}

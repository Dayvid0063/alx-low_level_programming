#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int w = 0;
int t;
while (*s)
{
for (t = 0; accept[t]; t++)
{
if (*s == accept[t])
{
w++;
break;
}
else if (accept[t + 1] == '\0')
return (w);
}
s++;
}
return (w);
}

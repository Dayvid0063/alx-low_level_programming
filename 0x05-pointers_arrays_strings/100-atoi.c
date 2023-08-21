#include "main.h"
/**
 * _atoi - convert a str to an int
 * @s: string converted
 *
 * Return: int converted from the str
 */
int _atoi(char *s)
{
int o, j, m, th, g, k;
o = 0;
j = 0;
m = 0;
th = 0;
g = 0;
k = 0;
while (s[th] != '\0')
th++;
while (o < th && g == 0)
{
if (s[o] == '-')
++j;
if (s[o] >= '0' && s[o] <= '9')
{
k = s[o] - '0';
if (j % 2)
k = -k;
m = m * 10 + k;
g = 1;
if (s[o + 1] < '0' || s[o + 1] > '9')
break;
g = 0;
}
o++;
}
if (g == 0)
return (0);
return (m);
}

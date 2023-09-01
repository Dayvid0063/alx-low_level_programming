#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a str to an int
 * @s: converted str
 *
 * Return: integer converted from str
 */
int _atoi(char *s)
{
int u, q, m, k, g, t;
u = 0;
q = 0;
m = 0;
k = 0;
g = 0;
t = 0;
while (s[k] != '\0')
k++;
while (u < k && g == 0)
{
if (s[u] == '-')
++q;
if (s[u] >= '0' && s[u] <= '9')
{
t = s[u] - '0';
if (q % 2)
t = -t;
m = m * 10 + t;
g = 1;
if (s[u + 1] < '0' || s[u + 1] > '9')
break;
g = 0;
}
u++;
}
if (g == 0)
return (0);
return (m);
}
/**
 * main - program multiplies two num
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0 (success) , 1 (Error)
 */
int main(int argc, char *argv[])
{
int h, b1, o2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
b1 = _atoi(argv[1]);
o2 = _atoi(argv[2]);
h = b1 *o2;
printf("%d\n", h);
return (0);
}

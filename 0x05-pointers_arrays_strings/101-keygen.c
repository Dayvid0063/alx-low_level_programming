#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
int p[100];
int o, u, m;
u = 0;
srand(time(NULL));
for (o = 0; o < 100; o++)
{
p[o] = rand() % 78;
u += (p[o] + '0');
putchar(p[o] + '0');
if ((2772 - u)-'0' < 78)
{
m = 2772 - u - '0';
u += m;
putchar(m + '0');
break;
}
}
return (0);
}

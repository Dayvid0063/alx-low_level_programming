#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int t, o, c;
for (t = '0' ; t < '9' ; t++)
{
for (o = t + 1 ; o <= '9' ; o++)
{
for (c = o + 1 ; c <= '9' ; c++)
{
if ((o != t) != c)
{
putchar(t);
putchar(o);
putchar(c);
if (t == '7' && o == '8')
continue;
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}

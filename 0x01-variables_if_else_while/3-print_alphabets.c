#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets lowercase and uppercase'
 * Return: 0
 */
int main(void)
{
int t = 97;
int v = 65;

while (t <= 122)
{
putchar(t);
t++;
}
while (v <= 90)
{
putchar(v);
v++;
}
putchar('\n');
return (0);
}

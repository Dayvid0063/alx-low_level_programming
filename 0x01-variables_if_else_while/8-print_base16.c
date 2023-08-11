#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints all the numbers of base 16 in lowercase'
 * Return: 0
 */
int main(void)
{
int t;
char w;

for (t = 0 ; t < 10 ; t++)
putchar(t + '0');
for (w = 'a' ; w <= 'f' ; w++)
putchar(w);
putchar('\n');
return (0);
}

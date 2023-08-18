#include <stdio.h>

/**
 * main - function find and print largest prime factor of num 612852475143
 *
 * Return: 0
 */
int main(void)
{
long prime = 612852475143, d;

while (d < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}
for (d = 3 ; d < (prime / 2) ; d += 2)
{
if ((prime % d) == 0)
prime /= d;
}
}
printf("%ld\n", prime);
return (0);
}

#include "main.h"

/**
 * more_numbers - function prints 10 times the number, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
int m, n;

for (m = 0 ; m < 10 ; m++)
{
for (n = 0 ; n < 15 ; n++)
{
if (n  >= 10)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}

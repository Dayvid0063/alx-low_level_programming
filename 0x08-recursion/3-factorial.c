#include "main.h"
/**
 * factorial - func returns the factorial of a num
 * @n: num to return the factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

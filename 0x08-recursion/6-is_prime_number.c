#include "main.h"
int actual_prime(int n, int n1);
/**
 * is_prime_number - if an int is a prime num or not
 * @n: evaluated num
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - if a num is prime recursively
 * @n: evaluated num
 * @n1: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int n1)
{
if (n1 == 1)
return (1);
if (n % n1 == 0 && n1 > 0)
return (0);
return (actual_prime(n, n1 - 1));
}

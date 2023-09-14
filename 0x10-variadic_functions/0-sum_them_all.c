#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Func returns the sum
 * @n: Num of paramters passed
 * @...: Variable num of paramters
 *
 * Return: If n == 0 - 0,otherwise the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list v;
unsigned int u, sum = 0;
va_start(v, n);
for (u = 0; u < n; u++)
sum += va_arg(v, int);
va_end(v);
return (sum);
}

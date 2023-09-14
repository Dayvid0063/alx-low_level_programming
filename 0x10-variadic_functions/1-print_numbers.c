#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Func prints num,then /n
 * @separator: Str being printed between num
 * @n: Int passed to the func
 * @...: Variable of int being printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list s;
unsigned int e;
va_start(s, n);
for (e = 0; e < n; e++)
{
printf("%d", va_arg(s, int));
if (e != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}

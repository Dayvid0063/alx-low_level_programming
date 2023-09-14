#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Func prints str,then /n
 * @separator: Str being printed
 * @n: Int of str passed
 * @...: Variable int of str
 *
 * Return: Str
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
char *u;
unsigned int e;
va_start(s, n);
for (e = 0; e < n; e++)
{
u = va_arg(s, char *);
if (u == NULL)
printf("(nil)");
else
printf("%s", u);
if (e != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}

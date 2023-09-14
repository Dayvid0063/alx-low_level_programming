#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Func prints anything
 * @format: Arguments passed to the func
 * @...: Var
 */
void print_all(const char * const format, ...)
{
int u = 0;
char *a, *w = "";
va_list h;
va_start(h, format);
if (format)
{
while (format[u])
{
switch (format[u])
{
case 'c':
printf("%s%c", w, va_arg(h, int));
break;
case 'i':
printf("%s%d", w, va_arg(h, int));
break;
case 'f':
printf("%s%f", w, va_arg(h, double));
break;
case 's':
a = va_arg(h, char *);
if (!a)
a = "(nil)";
printf("%s%s", w, a);
break;
default:
u++;
continue;
}
w = ", ";
u++;
}
}
printf("\n");
va_end(h);
}

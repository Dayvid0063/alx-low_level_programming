#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - func prints name
 * @name: str added
 * @f: ptr to func
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

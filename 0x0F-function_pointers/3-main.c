#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the results
 * @argc: Num of argument given to the program
 * @argv: Array of ptrs to arguments
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int n, m;
char *o;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n = atoi(argv[1]);
o = argv[2];
m = atoi(argv[3]);
if (get_op_func(o) == NULL || o[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*o == '/' && m == 0) ||
(*o == '%' && m == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(o)(n, m));
return (0);
}

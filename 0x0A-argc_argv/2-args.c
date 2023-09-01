#include <stdio.h>
#include "main.h"
/**
 * main - program prints all arguments it receives
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int u;
for (u = 0; u < argc; u++)
{
printf("%s\n", argv[u]);
}
return (0);
}

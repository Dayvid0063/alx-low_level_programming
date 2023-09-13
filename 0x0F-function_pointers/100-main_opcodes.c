#include <stdio.h>
#include <stdlib.h>
/**
 * main - program print opcodes
 * @argc: argument num
 * @argv: argument ar
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int y, u;
char *b;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
y = atoi(argv[1]);
if (y < 0)
{
printf("Error\n");
exit(2);
}
b = (char *)main;
for (u = 0; u < y; u++)
{
if (u == y - 1)
{
printf("%02hhx\n", b[u]);
break;
}
printf("%02hhx ", b[u]);
}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the minimum num of coins to make change
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int m, k, t;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
m = atoi(argv[1]);
t = 0;
if (m < 0)
{
printf("0\n");
return (0);
}
for (k = 0; k < 5 && m >= 0; k++)
{
while (m >= coins[k])
{
t++;
m -= coins[k];
}
}
printf("%d\n", t);
return (0);
}

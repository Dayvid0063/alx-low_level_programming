#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check str for digit
 * @str: str array
 *
 * Return: 0
 */
int check_num(char *str)
{
unsigned int t;
t = 0;
while (t < strlen(str))
{
if (!isdigit(str[t]))
{
return (0);
}
t++;
}
return (1);
}
/**
 * main - Print program name
 * @argc: Argument counts
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int t;
int str_to_int;
int m = 0;
t = 1;
while (t < argc)
{
if (check_num(argv[t]))
{
str_to_int = atoi(argv[t]);
m += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
t++;
}
printf("%d\n", m);
return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - program prints the num of arguments passed into it
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}

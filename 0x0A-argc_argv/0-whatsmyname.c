#include <stdio.h>
#include "main.h"

/**
 * main - prints program name then new line
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}

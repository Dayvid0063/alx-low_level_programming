#include "main.h"
/**
 * get_endianness - func check the endianness
 * Return: 0 if big, 1 if little endian
 */
int get_endianness(void)
{
int u;
char *h;
u = 1;
h = (char *)&u;
return (*h);
}

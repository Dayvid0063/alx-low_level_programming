#include"main.h"
/**
 * get_bit - func return value of a bit at index
 * @n: Num
 * @index: Index
 *
 * Return: Value,-1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int y;
unsigned long int h;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
y = 1 << index;
h = n & y;
if (h == y)
return (1);
return (0);
}

#include "main.h"

/**
 * set_bit - func set value of bit to 1 at index
 * @n: Num
 * @index: Index
 *
 * Return: 1 success,-1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
*n = ((1UL << index) | *n);
return (1);
}

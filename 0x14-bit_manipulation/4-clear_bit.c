#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - func set value of a bit to 0 at index
 * @n: Num
 * @index: Index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

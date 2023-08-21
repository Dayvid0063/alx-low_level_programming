#include "main.h"
/**
 * swap_int -swaps two integers
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
int v;
v = *a;
*a = *b;
*b = v;
}

#include "main.h"
/**
 * binary_to_uint - func converts binary num to unsigned int
 * @b: Binary num
 *
 * Return: Num
 */
unsigned int binary_to_uint(const char *b)
{
int u;
unsigned int v;
v = 0;
if (!b)
return (0);
for (u = 0 ; b[u] != '\0' ; u++)
{
if (b[u] != '0' && b[u] != '1')
return (0);
}
for (u = 0 ; b[u] != '\0' ; u++)
{
v <<= 1;
if (b[u] == '1')
v += 1;
}
return (v);
}

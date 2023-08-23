#include "main.h"
/**
 * leet - func that encodes a str into 1337
 * @n: value input
 * Return: n value
 */
char *leet(char *n)
{
int u, a;
char w1[] = "aAeEoOtTlL";
char w2[] = "4433007711";
for (u = 0; n[u] != '\0'; u++)
{
for (a = 0; a < 10; a++)
{
if (n[u] == w1[a])
{
n[u] = w2[a];
}
}
}
return (n);
}

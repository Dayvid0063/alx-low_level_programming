#include "main.h"
#include <stdio.h>
/**
 * rot13 - func that encodes a str using rot13
 * @s: pointer to str
 *
 * Return: *s
 */
char *rot13(char *s)
{
int u;
int a;
char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (u = 0; s[u] != '\0'; u++)
{
for (a = 0; a < 52; a++)
{
if (s[u] == d1[a])
{
s[u] = rot[a];
break;
}
}
}
return (s);
}

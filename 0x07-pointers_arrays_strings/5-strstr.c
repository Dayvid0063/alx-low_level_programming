#include "main.h"
/**
 * _strstr - Entry point a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *u = haystack;
char *o = needle;
while (*u == *o && *o != '\0')
{
u++;
o++;
}
if (*o == '\0')
return (haystack);
}
return (0);
}

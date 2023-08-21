#include "main.h"
/**
 * rev_string - Reverses string
 * @s: string input
 * Return: string in reversed mehod
 */
void rev_string(char *s)
{
char rev = s[0];
int c = 0;
int w;
while (s[c] != '\0')
c++;
for (w = 0; w < c ; w++)
{
c--;
rev = s[w];
s[w] = s[c];
s[c] = rev;
}
}

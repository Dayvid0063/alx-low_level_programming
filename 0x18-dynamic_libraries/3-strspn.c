#include "main.h"
/**
 * _strspn - Entry point of program
 * @s: entered value
 * @accept: entered value
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				v++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}

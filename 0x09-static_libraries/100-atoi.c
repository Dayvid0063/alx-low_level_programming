#include "main.h"
/**
 * _atoi - converts str into an int
 * @s: str to use
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1, u = 0;
	unsigned int e = 0;

	while (!(s[u] <= '9' && s[u] >= '0') && s[u] != '\0')
	{
		if (s[u] == '-')
			sign *= -1;
		u++;
	}
	while (s[u] <= '9' && (s[u] >= '0' && s[u] != '\0'))
	{
		e = (e * 10) + (s[u] - '0');
		u++;
	}
	e *= sign;
	return (e);
}

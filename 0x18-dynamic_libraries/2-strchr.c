#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point of the program
 * @s: input entered
 * @c: input entered
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int w = 0;

	for (w = 0; s[w] >= '\0'; w++)
	{
		if (s[w] == c)
			return (&s[w]);
	}
	return (0);
}

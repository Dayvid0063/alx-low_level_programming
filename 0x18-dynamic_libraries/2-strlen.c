#include "main.h"
/**
 * _strlen - program returns the str length
 * @s: str
 * Return: length of str
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

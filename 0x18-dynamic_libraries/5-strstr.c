#include "main.h"
/**
 * _strstr - Entry point of program
 * @haystack: value being entered
 * @needle: value being entered
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *q = needle;

		while (*o == *q && *q != '\0')
		{
			o++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}

	return (0);
}

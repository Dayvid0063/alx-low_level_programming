#include <stdlib.h>
#include "main.h"
/**
 * _strdup - func contains copy of the str given as a parameter
 * @str: str to copy
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *copy;
unsigned int u, e;
u = 0;
e = 0;
if (str == NULL)
return (NULL);
while (str[e])
e++;
copy = malloc(sizeof(char) * (e + 1));
if (copy == NULL)
return (NULL);
while ((copy[u] = str[u]) != '\0')
u++;
return (copy);
}

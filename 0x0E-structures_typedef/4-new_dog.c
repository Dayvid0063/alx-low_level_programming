#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of str returned
 * @s: evaluated str
 *
 * Return: the str length
 */
int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
/**
 * *_strcpy - copies the str
 * @dest: ptr to buffer in which we copy the str
 * @src: str being copied
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int e, u;
e = 0;
while (src[e] != '\0')
{
e++;
}
for (u = 0; u < e; u++)
{
dest[u] = src[u];
}
dest[u] = '\0';
return (dest);
}
/**
 * new_dog - makes new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: ptr to new dog (Success), NULL if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l, e;
l = _strlen(name);
e = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (l + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (e + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}

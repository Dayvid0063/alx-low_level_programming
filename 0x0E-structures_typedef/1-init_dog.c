#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - activate a variable type struct dog
 * @d: ptr to struct dog to activate
 * @name: name to activate
 * @age: age to activate
 * @owner: owner to activate
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}

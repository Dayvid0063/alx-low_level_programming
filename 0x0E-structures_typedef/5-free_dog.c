#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - func frees memory for struct dog
 * @d: struct dog being free(d)
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

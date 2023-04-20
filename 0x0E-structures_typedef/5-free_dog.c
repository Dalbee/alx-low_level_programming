#include <stdlib.h>
#include "dog.h"

/**
* free_dog - A fxn that frees the memory allocated for a struct dog
* @d: the struct dog to free
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
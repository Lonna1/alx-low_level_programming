#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct pointer
 * @d: pointer to free
 */

void free_dog(dog_t *d)
{
	if (x)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}

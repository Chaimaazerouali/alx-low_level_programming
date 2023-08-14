#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Frees the memory allocated for a dog structure.
* @dog: Pointer to the dog structure to be freed.
*/
void free_dog(dog_t *dog)
{
	if (dog != NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}

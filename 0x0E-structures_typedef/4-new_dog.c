#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - Creates a new dog with the given name, age, and owner.
* @name: Pointer to the name of the dog.
* @age: Age of the dog.
* @owner: Pointer to the owner of the dog.
* Return: Pointer to the newly created dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}

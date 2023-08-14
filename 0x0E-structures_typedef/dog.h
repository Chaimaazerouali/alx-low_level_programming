#ifndef DOG_LAB
#define DOG_LAB

/**
*struct dog - Dog structure
*@name: Pointer to the dog's name.
*@age: Age of the dog.
*@owner: Pointer to the owner's name.
*Description: Structure representing a dog with its name, age,
*and owner's name.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

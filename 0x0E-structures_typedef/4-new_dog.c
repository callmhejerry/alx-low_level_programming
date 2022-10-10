#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - A funtion that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: A new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *namecpy;
	char *ownercpy;

	newDog = (dog_t *)malloc(sizeof(dog_t));
	namecpy = name;
	ownercpy = owner;
	if (newDog == NULL)
		return (NULL);
	newDog->name = namecpy;
	newDog->age = age;
	newDog->owner = ownercpy;
	return (newDog);
}

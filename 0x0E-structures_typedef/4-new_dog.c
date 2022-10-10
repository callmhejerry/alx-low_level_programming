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

	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		free(&(newDog->age));
		free(&(newDog->name));
		free(&(newDog->owner));
		return (NULL);
	}
	newDog->age = age;
	newDog->name = name;
	newDog->owner = owner;
	return (newDog);
}

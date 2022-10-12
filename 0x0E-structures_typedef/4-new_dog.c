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
	unsigned int nameLen, ownLen, count;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (nameLen = 0; name[nameLen] != '\0'; nameLen++)
		;
	nameLen++;
	newDog->name = malloc(sizeof(char) * nameLen);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (count = 0; count < nameLen; count++)
		newDog->name[count] = name[count];
	newDog->age = age;
	for (ownLen = 0; owner[ownLen] != '\0'; ownLen++)
		;
	ownLen++;
	newDog->owner = malloc(sizeof(char) * ownLen);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (count = 0; count < ownLen; count++)
		newDog->owner[count] = owner[count];
	return (newDog);
}

#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - A function that initializes a dog struct
 * @d: the dog struct to initialize
 * @name: the name to give to the dog struct
 * @age: the age to give to the dog struct
 * @owner: the owner to give to the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include <stdlib.h>

/**
 * free_dog -  A function tht frees a struct dog memory
 * @d: the dog struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(&(d->name));
	free(&(d->age));
	free(&(d->owner));
	free(d);
	free(&d);
}

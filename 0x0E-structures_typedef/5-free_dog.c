#include <stdlib.h>
#include "dog.h"
#pragma pack(0)

/**
 * free_dog -  A function tht frees a struct dog memory
 * @d: the dog struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}

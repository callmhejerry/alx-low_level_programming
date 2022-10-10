#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A function that prints a dog struct
 * @d: the dog struct to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
		return;
	}
	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}

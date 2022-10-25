#include <stdio.h>
#include "lists.h"

/**
  * print_listint - A function that prints all the elements of
  * a listint_t list
  * @h: the pointer to the beginning of the list
  * Return: the lenght of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

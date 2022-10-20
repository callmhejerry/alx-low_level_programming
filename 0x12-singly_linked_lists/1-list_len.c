#include <stddef.h>
#include "lists.h"

/**
  * list_len - A function that returns the
  * number of elements of a linked list_t list
  * @h: the pointer to the first elements of the list
  * Return: the number of the elements
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

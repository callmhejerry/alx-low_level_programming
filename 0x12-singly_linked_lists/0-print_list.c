#include "lists.h"
#include <stdio.h>

/**
  * print_list - A fnuction to print all the elements
  * of a list_t list
  * @h: the pointer to the first element of a list
  * Return: the number of elements in the list
  */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}


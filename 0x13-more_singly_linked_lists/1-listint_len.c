#include "lists.h"
#include <stdio.h>

/**
  * listint_len - A function that returns the
  * lenght of a linked listint_t list
  * @h: the pointer to the start of the list
  * Return: the length o the list
  */
size_t listint_le(const listint_t *h)
{
	size_t count;
	listint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

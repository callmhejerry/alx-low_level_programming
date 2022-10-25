#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_listint_safe - A function that prints a listint linked list
  * @head: the pointer to the first node of the list
  * Return: the size of the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *before, *after;
	size_t count;

	if (head == NULL)
		exit(98);
	before = NULL;
	after = head;
	count = 0;
	while (1)
	{
		printf("[%p] %i\n", (void *)after, after->n);
		before = after;
		after = after->next;
		count++;
		if (after > before || after == NULL)
			break;
	}
	if (after != NULL)
		printf("-> [%p] %i\n", (void *)after, after->n);
	return (count);
}

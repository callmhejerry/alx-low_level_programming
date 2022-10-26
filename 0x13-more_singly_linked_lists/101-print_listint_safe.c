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
		return (0);
	before = head;
	after = head->next;
	count = 0;
	while (after != NULL && after < before)
	{
		printf("[%p] %i\n", (void *)before, before->n);
		before = before->next;
		after = after->next;
		count++;
	}
	printf("[%p] %i\n", (void *)before, before->n);
	count++;
	if (after != NULL)
	{
		printf("-> [%p] %i\n", (void *)after, after->n);
	}
	return (count);
}

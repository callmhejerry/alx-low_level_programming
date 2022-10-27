#include <stdio.h>
#include "lists.h"

/**
  * free_listint_safe - A function that frees a listint_t list
  * @h: the pointer to the head of the list
  * Return: the size of the list that was freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *before, *after;
	size_t count;

	if (*h == NULL)
		return (0);
	before = *h;
	after = (*h)->next;
	count = 0;
	while (after < before && after != NULL)
	{
		free(before);
		count++;
		before = before->next;
		after = after->next;
	}
	free(before);
	*h = NULL;
	count++;
	return (count);
}

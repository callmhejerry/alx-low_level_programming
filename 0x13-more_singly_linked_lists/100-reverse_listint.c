#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint - A fucntion that reverses a listint_t linked list
  * @head: the pointer to the start of the list
  * Return: the pointer to the first node of the list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *after;

	if (*head == NULL)
		return (NULL);
	before = NULL;
	after = *head;
	*head = (*head)->next;
	while (*head != NULL)
	{
		after->next = before;
		before = after;
		after = *head;
		*head = (*head)->next;
	}
	after->next = before;
	*head = after;
	return (after);
}

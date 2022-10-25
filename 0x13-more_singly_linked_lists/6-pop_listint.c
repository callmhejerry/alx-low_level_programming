#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - A function that deletes the head node
  * of a listint_t linked list.
  * @head: the start of the list
  * Return: the head's node data
  */
int pop_listint(listint_t **head)
{
	listint_t *temp_next;
	int value;

	if (*head == NULL)
		return (0);
	temp_next = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = temp_next;
	return (value);
}

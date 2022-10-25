#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - A function that returns the nth
  * node of a listint_t linkedlist
  * @head: the start of the list
  * @index: the index
  * Return: the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	count = 0;
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}

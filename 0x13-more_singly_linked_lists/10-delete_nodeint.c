#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - A funciton that deletes the node
  * at index of a listint_t linkedlist
  * @head: the start of the list
  * @index: the index to delete
  * Return: 1 if successful, -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *hold;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	temp = *head;
	count = 0;
	hold = *head;
	while (temp != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = temp->next;
				free(temp);
			}
			else
			{
				hold->next = temp->next;
				free(temp);
			}
			return (1);
		}
		hold = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}

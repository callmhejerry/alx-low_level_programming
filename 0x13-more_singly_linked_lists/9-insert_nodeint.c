#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * insert_nodeint_at_index - A function that inserts a new node
  * at a given position
  * @head: the start of the list
  * @idx: the index to add the new node in the list
  * @n: the value to add
  * Return: the address of the new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp, *h;
	unsigned int count;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	node = NULL;
	count = 0;
	while (temp != NULL)
	{
		if (count == idx)
		{
			node = (listint_t *)malloc(sizeof(listint_t));
			if (node == NULL)
				return (NULL);
			node->n = n;
			node->next = temp;
			h->next = node;
			return (node);
		}
		count++;
		h = temp;
		temp = temp->next;
	}
	return (node);
}

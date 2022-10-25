#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint -  A function that adds a node at the
  * beginning of a listint_t list
  * @head: the pointer to the start of the list
  * @n: the number to add
  * Return: the address of the new element or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	node->next = *head;
	*head = node;
	return (node);
}

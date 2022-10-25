#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - A function that adds a new node at
  * the end of a listint_t list
  * @head: the pointer to the start of the list
  * @n: the number to add to the list
  * Return: the address of the new element or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->next = NULL;
	return (node);
}

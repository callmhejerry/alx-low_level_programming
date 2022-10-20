#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - A function that adds a new node at the end
  * of a list_t list
  * @head: the pointer to the first element of the list
  * @str: the value of the str member in the node
  * Return: the adderess of the newly added node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (1)
	{
		if (temp->next == NULL)
		{
			temp->next = node;
			break;
		}
		temp = temp->next;
	}
	return (node);
}

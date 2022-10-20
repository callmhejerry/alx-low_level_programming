#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
  * add_node - A function that adds a new node
  * at the beginning of a list_t list
  * @head: the pointer to the first element of the list
  * @str: the value of the str in the node
  * Return: the pointer to the newly created node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}

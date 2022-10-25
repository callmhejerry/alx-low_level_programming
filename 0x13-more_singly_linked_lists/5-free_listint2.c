#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - A function that frees a listint_t list
  * @head: the start of the list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	temp = *head;
	h = *head;
	while (h != NULL)
	{
		h = h->next;
		free(temp);
		temp = h;
	}
	*head = h;
}

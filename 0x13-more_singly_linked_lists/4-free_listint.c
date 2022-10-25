#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - A function that frees a listint_t list
  * @head: the start of the list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

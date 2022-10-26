#include "lists.h"
#include <stdlib.h>

/**
  * find_listint_loop - A function that finds the loop in a
  * linked list
  * @head: the pointer to the start of the list
  * Return: NULL if not found , else the node where the
  * loop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	turtle = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		hare = hare->next->next;
		turtle = turtle->next;
		if (hare == turtle)
		{
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}

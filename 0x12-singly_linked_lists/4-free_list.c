#include <stdlib.h>
#include "lists.h"


/**
  * free_list - A function that frees a list_t list
  * @head: the pointer to the first node of the list
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (1)
		{
			if (head->next == NULL)
			{
				temp = head;
				break;
			}
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
		free(temp->str);
		free(temp);
	}
	return ;
}

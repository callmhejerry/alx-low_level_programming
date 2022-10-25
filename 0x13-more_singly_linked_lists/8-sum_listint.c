#include <stdio.h>
#include "lists.h"

/**
  * sum_listint - A function that returns the sum
  * of all data of a listint_t linked list
  * @head: the start of the list
  * Return: the sum of the n data of the list
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

#include <stdio.h>
#include "lists.h"

/**
  * print_listint - A function that prints all the elements of
  * a listint_t list
  * @h: the pointer to the beginning of the list
  * Return: the lenght of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}#include <stdio.h>
#include "lists.h"

/**
  * print_listint - A function that prints all the elements of
  * a listint_t list
  * @h: the pointer to the beginning of the list
  * Return: the lenght of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}#include <stdio.h>
#include "lists.h"

/**
  * print_listint - A function that prints all the elements of
  * a listint_t list
  * @h: the pointer to the beginning of the list
  * Return: the lenght of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}

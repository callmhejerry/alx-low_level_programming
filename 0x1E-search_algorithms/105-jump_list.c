#include "search_algos.h"

listint_t *jump(size_t step, listint_t *from);
listint_t *linearSearch(listint_t *start, listint_t *stop, int value);
/**
 * jump_list - A function that searches for a value in sorted list of
 * integers using the jump search algorithm
 * @list: the pointer to the head of the list to search in
 * @size: the number of nodes in the list
 * @value: the value to search for
 * Return: the pointer to the first node where value is located,
 * else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	listint_t *start, *stop;

	if (list == NULL)
		return (NULL);
	step = sqrt(size);
	start = list;
	stop = jump(step, start);
	while (start->index < size)
	{
		printf("Value checked at index [%li] = [%i]\n", stop->index,
				stop->n);
		if (stop->n >= value || stop->index >= size - 1)
			return (linearSearch(start, stop, value));
		start = stop;
		stop = jump(step, start);
	}
	return (NULL);
}

/**
 * jump - A function that jumps in a linked list
 * @from: the element to jump from
 * @step: the number of steps to jump
 * Return: return the pointer to the element that is jumped to
 * else return NULL
 */
listint_t *jump(size_t step, listint_t *from)
{
	listint_t *temp;
	size_t count;

	temp = from;
	count = 1;
	if (temp == NULL)
		return (NULL);
	while (count <= step)
	{
		if (temp->next != NULL)
			temp = temp->next;
		else
			return (temp);
		count++;
	}
	return (temp);
}

/**
 * linearSearch - A function that searches for a value using linear search
 * algorithm
 * @start: the pointer to the first element in the list
 * @stop: the pointer to the last element in the list
 * @value: the value to search for
 * Return: the pointer of the value or NULL
 */
listint_t *linearSearch(listint_t *start, listint_t *stop, int value)
{
	listint_t *temp;

	temp = start;
	printf("Value found between indexes [%li] and [%li]\n", start->index,
			stop->index);
	while (temp != NULL && temp->index <= stop->index)
	{
		printf("Value checked at index [%li] = [%i]\n", temp->index,
				temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

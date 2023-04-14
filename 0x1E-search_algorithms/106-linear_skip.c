#include "search_algos.h"

skiplist_t *jump(skiplist_t *from);
skiplist_t *linearSearch(skiplist_t *start, skiplist_t *stop, int value);
/**
 * jump_list - A function that searches for a value in sorted list of
 * integers using the jump search algorithm
 * @list: the pointer to the head of the list to search in
 * @size: the number of nodes in the list
 * @value: the value to search for
 * Return: the pointer to the first node where value is located,
 * else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *stop;

	if (list == NULL)
		return (NULL);
	start = list;
	stop = jump(start);
	while (start->index != stop->index)
	{
		printf("Value checked at index [%li] = [%i]\n", stop->index,
				stop->n);
		if (stop->n >= value || start->express == NULL)
			return (linearSearch(start, stop, value));
		start = stop;
		stop = jump(start);
	}
	return (NULL);
}

/**
 * jump - A function that jumps in a linked list
 * @from: the element to jump from
 * Return: return the pointer to the element that is jumped to
 * else return NULL
 */
skiplist_t *jump(skiplist_t *from)
{
	skiplist_t *temp;

	temp = from;
	if (temp->express != NULL)
		return (temp->express);
	else
	{
		while (temp != NULL)
		{
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
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
skiplist_t *linearSearch(skiplist_t *start, skiplist_t *stop, int value)
{
	skiplist_t *temp;

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

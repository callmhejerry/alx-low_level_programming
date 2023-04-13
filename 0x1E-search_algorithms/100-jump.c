#include "search_algos.h"


int linearSearch(int *, size_t, size_t, int);
/**
 * jump_search - A function that searches for a value
 * in a sorted array of integers using the jump search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index of the value,else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, start;

	jump = sqrt(size);

	if (array == NULL)
		return (-1);
	if (value < array[0])
		return (-1);
	for (start = 0; start < size + jump; start += jump)
	{
		if (start > size || array[start] >= value)
		{
			printf("Value found between indexes [%li] and [%li]\n",
					start - jump, start);
			return (linearSearch(array, start - jump, size,
						value));
		}
		printf("Value checked array[%li] = [%i]\n", start,
				array[start]);
	}
	return (-1);
}

/**
 * linearSearch - A function that searches for a value in an array
 * using linear saerch algorithm
 * @array: the array to search in
 * @start: the first index of the array
 * @stop: the last index of the array
 * @value: the value to search for
 * Return: the index of the value, else -1
 */
int linearSearch(int *array, size_t start, size_t stop, int value)
{
	size_t i;

	for (i = start; i < stop; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

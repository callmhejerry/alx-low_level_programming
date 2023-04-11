#include "search_algos.h"

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
	size_t jump, start, stop;

	jump = sqrt(size);
	start = 0;
	stop = jump;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%li] = [%i]\n",
			start, array[start]);
	while (stop < size && array[stop] < value)
	{
		start = stop;
		stop += jump;
		printf("Value checked array[%li] = [%i]\n",
				start, array[start]);
	}
	printf("Value found between indexes [%li] and [%li]\n", start, stop);
	if (stop > size)
		stop = size - 1;
	while (start <= stop)
	{
		printf("Value checked array[%li] = [%i]\n",
				start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}

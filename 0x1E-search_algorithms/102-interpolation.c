#include "search_algos.h"

int recur_search(int *array, size_t start, size_t stop, int value);
/**
 * interpolation_search - A function that searches for a value in a
 * sorted array of integers using the interpolation search algorithm
 * @array: the pointer to the first element of the array
 * @size: the nunmber of elememts in array
 * @value: the value to search for
 * Return: the index of the value , else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recur_search(array, 0, size - 1, value));
}

/**
 * recur_search - A function that searches an array recursively
 * @array: the pointer to the array to search
 * @start: the start index of the array
 * @stop: the stop index of the array
 * @value: the value to search for
 * Return: the index of the searched value, else -1
 */
int recur_search(int *array, size_t start, size_t stop, int value)
{
	size_t pos;

	if (start <= stop)
	{
		pos = start + (((double)(stop - start) / (array[stop]
						- array[start]))
				* (value - array[start]));
		if (pos > stop)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = array[%i]\n",
				pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			return (recur_search(array, pos + 1, stop, value));
		if (value < array[pos])
			return (recur_search(array, start, pos - 1, value));
	}
	return (-1);
}

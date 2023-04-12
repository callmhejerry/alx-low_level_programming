#include "search_algos.h"

void print_search(size_t start, size_t end, int *array);
int recur_search(int *array, size_t start, size_t end, int value);

/**
 * binary_search - A function that searches for a value in a
 * sorted array of integers using the binary search algorithm
 * @array: the pointer to the first element of the array to
 * search for
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index where value is located, else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recur_search(array, 0, size - 1, value));
}

/**
 * print_search - A function that prints "searching in array"
 * when the binaray search function is searching
 * @start: the start of the array
 * @end: the end of the array
 * @array: the pointer to the array
 * Return: void
 */
void print_search(size_t start, size_t end, int *array)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf(" %i\n", array[i]);
		else
			printf(" %i,", array[i]);
	}
}


/**
 * recur_search - A function that searches for a number
 * recursively
 * @array: the array to search
 * @start: the start of the array
 * @end: the end of the array
 * @value: the value to search for
 * Return: the index where the value is located, else -1
 */
int recur_search(int *array, size_t start, size_t end, int value)
{
	size_t mid;
	int mid_val;

	if (start <= end)
	{
		mid = (start + end) / 2;
		mid_val = array[mid];

		print_search(start, end, array);
		if (mid_val == value)
			return (mid);
		if (value > mid_val)
			return (recur_search(array, mid + 1, end, value));
		if (value < mid_val)
		{
			if (mid == 0)
				return (-1);
			return (recur_search(array, start, mid - 1, value));
		}
	}
	return (-1);
}

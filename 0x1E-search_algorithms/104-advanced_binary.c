#include "search_algos.h"

void print_search(size_t, size_t, int *);
int recurBinarySearch(int *, size_t, size_t, int);

/**
 * advanced_binary - A function that searches for a value in a sorted array
 * @array: the pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index of the first element
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recurBinarySearch(array, 0, size - 1, value));
}

/**
 * recur_binary_search - a function that searches for a value in an arrray
 * using the binary search algorithm
 * @array: the array to search
 * @start: the fiest index of the array
 * @stop: the last index of the array
 * @value: the value to search for
 * Return: the index of the first value found, else -1
 */
int recurBinarySearch(int *array, size_t start, size_t stop, int value)
{
	size_t mid;

	if (stop >= start)
	{
		print_search(start, stop, array);
		mid = (stop + start) / 2;
		if (value == array[start])
			return (start);
		if (value > array[mid])
			return (recurBinarySearch(array, mid + 1, stop,
						value));
		if (value <= array[mid])
			return (recurBinarySearch(array, start, mid, value));
	}
	return (-1);
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

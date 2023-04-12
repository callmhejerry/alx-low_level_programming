#include "search_algos.h"


size_t min(size_t, size_t);
int binarySearch(int *array, size_t start, size_t stop, int value);
void print_array(int *, size_t, size_t);

/**
 * exponential_search - A function that searches for a value in a sorted
 * array of integers using the exponential search algorithm
 * @array: the pointer to the element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index of the value,else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, m;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i = i * 2;
	}
	m = min(i, size - 1);
	printf("Value found between indexes [%li] and [%li]\n", i / 2, m);
	return (binarySearch(array, i / 2, m, value));
}


/**
 * min - A function that finds the minimum number between two
 * numbers
 * @first: the first number
 * @second: the second number
 * Return: the smallest number
 */
size_t min(size_t first, size_t second)
{
	if (first > second)
		return (second);
	return (first);
}

/**
 * binary_search - A fucntion that searches for a value in an array using
 * the binary search algorithm
 * @array: the array to be searched
 * @start: the first index of teh array
 * @stop: the last index of the array
 * @value: the value to search
 * Return: the index of the value or -1
 */
int binarySearch(int *array, size_t start, size_t stop, int value)
{
	size_t mid;

	if (start <= stop)
	{
		print_array(array, start, stop);
		mid = (start + stop) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			return (binarySearch(array, start, mid - 1, value));
		if (value > array[mid])
			return (binarySearch(array, mid + 1, stop, value));
	}
	return (-1);
}

/**
 * print_array - A fucntion that prints an array
 * @array: the array to print
 * @start: the first index of the array
 * @stop: the last index of the array
 * Return: void
 */
void print_array(int *array, size_t start, size_t stop)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= stop; i++)
	{
		if (i == stop)
			printf(" %i\n", array[i]);
		else
			printf(" %i,", array[i]);
	}
}

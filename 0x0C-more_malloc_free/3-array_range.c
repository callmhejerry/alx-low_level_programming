#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: the minimum number in the array
 * @max: the maximum number in the array
 *
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int size_arr, i, *arr;

	if (min < max)
		return (NULL);
	size_arr = (max - min) + 1;
	arr = (int *)malloc(sizeof(int) * size_arr);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size_arr; i++)
	{
		if (min <= max)
			arr[i] = min;
		min++;
	}
	return (arr);
}

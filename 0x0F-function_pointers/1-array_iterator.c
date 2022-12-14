#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - A function that performs a function
 * on each elements of an array
 * @array: the array passed to the function
 * @size: the size of the array
 * @action: the function to perform on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

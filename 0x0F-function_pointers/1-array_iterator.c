#include <stdlib.h>
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
unsigned long i;

if (array == NULL || action == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

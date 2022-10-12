/**
 * int_index -  A function that searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the function to perform the search
 * Return: the index of the found element , else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}

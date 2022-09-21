
/**
 * reverse_array - A function that reverses the content
 * of an array of integers
 * @a: the array to be reversed
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, num;

	i = 0;
	while (n - i > 0)
	{
		num = a[i];
		a[i] = a[n - 1];
		a[n - 1] = num;
		i++;
		n--;
	}
}

#include <stdlib.h>

/**
 * create_array - A function that creates
 * an array of chars and initializes it with a specific character
 * @size: the size of the array to created
 * c: the character to initialize the array with
 * Return: pointer to the array
 */
char *create_array(int size, char c)
{
	char *ptr;
	if (size < 1)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	*ptr = c;
	return (ptr);
}

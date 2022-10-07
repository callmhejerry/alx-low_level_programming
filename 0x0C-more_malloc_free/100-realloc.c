#include <string.h>
#include <stdlib.h>

/**
 * _realloc - A function that reallocates memory using
 * malloc and free
 * @ptr: the pointer to the previous allocated memory
 * @old_size: the size of the previously allocated memory
 * @new_size: the size of the new memory
 *
 * Return: the address to the newly allocatd memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (old_size > new_size)
	{
		free((char *)ptr + new_size);
		return (ptr);
	}
	else if (ptr == NULL)
		new_ptr = (char *)malloc(new_size);
	else
		new_ptr = (char *)malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	memmove(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

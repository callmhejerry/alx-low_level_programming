#include <string.h>
#include <stdlib.h>

/**
 * _realloc - A function that reallocates memory using
 * malloc and free
 * @ptr: the pointer to the previous allocated memory
 * @old_size: the size of the previously allocated memory
 * @new_size: the size of the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i, j;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		new_ptr = malloc(new_size);
	else
		new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

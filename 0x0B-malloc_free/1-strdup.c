#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string given
 * as parameter
 * @str: the string paramenter
 * Return: the pointer to the new allocated memory
 */
char *_strdup(char *str)
{
	int i, k;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (k <= i)
	{
		ptr[k] = str[k];
		k++;
	}
	return (ptr);
}

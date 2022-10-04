#include <stdlib.h>

int total(char *str);
/**
 * strtow - A function that splits a string into words
 * @str: the pointer to the string
 *
 * Return: A pointer to the array of words
 */
char **strtow(char *str)
{
	char **ptr;
	int i, count, j, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = total(str);
	if (count < 1)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0'; i++)
		if (str[i] != ' ')
		{
			for (k = 0; str[i] != ' ' && str[i] != '\0'; k++, i++)
				;
			if (j < count)
			{
				ptr[j] = (char *)malloc(sizeof(char) * k);
				if (ptr[j] == NULL)
					return (NULL);
				j++;
			}
			else
				ptr[j] = NULL;
		}
	for (i = 0, j = 0; str[i] != '\0'; i++)
		if (str[i] != ' ')
		{
			if (j < count)
			{
				for (k = 0; str[i] != ' '; k++, i++)
					ptr[j][k] = str[i];
				ptr[j][k] = '\0';
				j++;
			}
		}
	return (ptr);
}

/**
 * total - A function to loop through
 * a string
 * @str: the pointer to the string
 * Return: the number of words in the string
 */
int total(char *str)
{
	int count, i;

	for (i = 0, count = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for ( ; str[i] != ' '; i++)
				;
			count++;
		}
	}
	return (count);
}

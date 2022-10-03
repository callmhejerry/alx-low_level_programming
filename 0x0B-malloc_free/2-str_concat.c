#include <stdlib.h>

/**
 * str_concat - A function that joins two string together
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer to the final string or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size, i, k, a, l, m;

	size = 1;
	if (s1 == NULL && s2 != NULL)
	{
		for (k = 0; s2[k] != '\0'; k++)
			;
		size = k + 1;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		size = i + 1;
	}
	else if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		for (k = 0; s2[k] != '\0'; k++)
			;
		size = i + k + 1;
	}
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < size; )
	{
		if (s1 != NULL)
			for (l = 0; s1[l] != '\0'; l++, a++)
				ptr[a] = s1[l];
		if (s2 != NULL)
			for (m = 0; s2[m] != '\0'; m++, a++)
				ptr[a] = s2[m];
		ptr[a] = '\0';
		a++;
	}
	return (ptr);
}

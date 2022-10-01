/**
 * _strstr - function that finds the first occurance of the
 * substring needle int the string haystack.
 * @haystack: the string to be searched
 * @needle: the string to search for
 *
 * Return: A pointer to the beginning of the located
 * substring or NULL if  not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, k = i; needle[j] != '\0'; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0')
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}

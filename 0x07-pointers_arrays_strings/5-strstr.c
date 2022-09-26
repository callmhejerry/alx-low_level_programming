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

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j] != '\0')
			{
				if (haystack[i] != needle[j]
						 && haystack[i] != '\0')
					return (0);
				i++;
				j++;
			}
			return (haystack + k);
		}
		i++;
	}
}

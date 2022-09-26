/**
 * _strpbrk - A function that searches a string for any of the set of bytes
 * @s: the string to be searched
 * @accepted: the searched string
 *
 * Return: the pointer to the byte in s that matches accept
 * or NULL if none matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

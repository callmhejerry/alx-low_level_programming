/**
 * _strchr - A function that locates a character in a string
 * @s: the string to search
 * @c: the character to search for
 *
 * Return: the address to the character if found , or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

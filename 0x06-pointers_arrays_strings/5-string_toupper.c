/**
 * string_toupper - A function that converts a string to upper case
 * @str: The string to be converted
 *
 * Return: the conerted string
 */
char *string_toupper(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
			str[len] = str[len] - 32;
		len++;
	}
	return (str);
}

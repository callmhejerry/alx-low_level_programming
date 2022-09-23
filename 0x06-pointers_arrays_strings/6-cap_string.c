#include <stdio.h>

/**
 * cap_string - a function that capitalizes evry word of a string
 * @str: the string to capitalize
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
		{
			if (str[len - 1] == '.' || str[len - 1] == ' ')
				str[len] = str[len] - 32;
			if (str[len - 1] == '\t' || str[len - 1] == '\n')
				str[len] = str[len] - 32;
			if (str[len - 1] == ';' || str[len - 1] == ',')
				str[len] = str[len] - 32;
			if (str[len - 1] == '!' || str[len - 1] == '?')
				str[len] = str[len] - 32;
			if (str[len - 1] == '"' || str[len - 1] == '(')
				str[len] = str[len] - 32;
			if (str[len - 1] == ')' || str[len - 1] == '{')
				str[len] = str[len] - 32;
			if (str[len - 1] == '}')
				str[len] = str[len] - 32;
			if (len == 0)
				str[len] = str[len] - 32;
			len++;
		}
		else
			len++;
	}
	return (str);
}


/**
 * check - checks if a character is a digit
 * @str: the character to check
 *
 * Return: 0 if it is not a digit1 if itis a digit
 */
int check(char *str)
{
	int i, j;

	j = 1;
	if (str[0] == '-' && str[1] != '\0')
	{
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
			{
				j = 0;
				break;
			}
			i++;
		}
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
			{
				j = 0;
				break;
			}
			i++;
		}
	}
	return (j);
}

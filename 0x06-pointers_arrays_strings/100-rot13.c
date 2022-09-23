/**
 * rot13 - A function that encodes a string to rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char small[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l'
		, 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'
			, 'x', 'y', 'z'};
	char cap[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'
		, 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'
			, 'V', 'W', 'X', 'Y', 'Z'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 26)
		{
			if (str[i] == small[j])
			{
				str[i] = small[(j + 13) % 26];
				break;
			}
			else
			{
				str[i] = cap[(j + 13) % 26];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

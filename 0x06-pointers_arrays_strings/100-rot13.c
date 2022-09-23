/**
 * rot13 - A function that encodes a string to rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char small[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E'
	       , 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K'
	       , 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'r', 'R', 's', 'S'
	       , 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y'
	       , 'z', 'Z'};
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (str[i] == small[j])
			{
				str[i] = small[(j + 13 * 2) % 52];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

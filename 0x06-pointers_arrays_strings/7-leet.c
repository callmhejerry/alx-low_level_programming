/**
 * leet - A function that encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: void
 */

char *leet(char *str)
{
	char leets[20] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o'
		, '0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 20)
		{
			if (str[i] == leets[j])
			{
				str[i] = leets[j + 1];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

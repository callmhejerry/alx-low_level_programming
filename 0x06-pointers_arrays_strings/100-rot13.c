/**
 * rot13 - A function that encodes a string to rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the substring
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, j;

	count = 0;
	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] == accept[i])
		{
			if (s[j] == accept[i])
			{
				if (count < j + 1)
					count = j + 1;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}

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
		while (accept[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (count);
		i++;
	}
	return (count);
}

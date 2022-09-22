/**
 * _strcmp - A function that compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the difference between the first and second string
 */
int _strcmp(char *s1, char *s2)
{
	int i, digit;

	i = 0;
	digit = 0;
	if (s1[i] == s2[i])
	{
		do {
			i++;
			if (s1[i] != s2[i])
				digit = s1[i] - s2[i];
		} while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0');
	}
	else
		digit = s1[i] - s2[i];
	return (digit);
}

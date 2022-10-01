/**
 * _strcat - A function that concatenates two strings
 * @dest: the string toe be appended to
 * @src: the string that is appended
 * Return: the pointer of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	return (dest);
}

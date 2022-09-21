/**
 * _strncat - concatenates two strings together using at most
 * n bytes from the src
 * @dest: the string you want to appended to
 * @src: the string you are appending
 * @n: the number of bytes to append
 *
 * Return: the pointer to the string you are appending to
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

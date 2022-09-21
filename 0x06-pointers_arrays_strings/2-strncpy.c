/**
 * _strncpy - A function that copies a string
 * @dest: the string to which another string is copied to
 * @src: the string copied from
 * @n: the number of string to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

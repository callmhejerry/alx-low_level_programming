/**
 * _memset - A function that fills the first n bytes
 * of the memory area pointed by s with the constant byte b
 * @s: the pointer to the memory
 * @b: the constant byte to filled with
 * @n: the number of bytes to fill
 *
 * Return: the pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

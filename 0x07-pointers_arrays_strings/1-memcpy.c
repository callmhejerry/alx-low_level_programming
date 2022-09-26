/**
 * _memcpy - A function that copies n bytes from memory area src
 * to memory area dest
 * @dest: the pointer to the memory we want to copy to
 * @src: the pointer to the memory we are copying from
 * @n: the number of bytes to copy from src
 *
 * Return: the pointer to the memory we copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}

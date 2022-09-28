/**
 * _strlen_recursion - A fucntion that returns the length of a
 * string
 * @s: The pointer to the string
 *
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _isalpha - checks if a character is
 * an alphabet
 * @c: the character to check
 *
 * Return: 1 if character is alpha,
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

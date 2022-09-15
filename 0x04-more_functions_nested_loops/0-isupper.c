/**
 * _isupper - checks if a letter is upper case
 * @c: the letter to be checked
 *
 * Return: 1 if c is upper case, 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

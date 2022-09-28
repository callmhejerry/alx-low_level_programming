/**
 * factorial - A function that returns the factorial of a number
 * @n: the number to find the factorial of
 *
 * Return: the factorial of n if n >= 0
 * -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

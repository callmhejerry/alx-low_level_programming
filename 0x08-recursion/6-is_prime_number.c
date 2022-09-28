int a = 2;
/**
 * is_prime_number - A function that checks for a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		a = 2;
		return (0);
	}
	if (a != n && n % a == 0)
	{
		a = 2;
		return (0);
	}
	else if (a == n)
	{
		a = 2;
		return (1);
	}
	a++;
	return (is_prime_number(n));
}

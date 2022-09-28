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
		return (0);
	if (n == 2)
		return (0);
	else if (n % 3 == 0 || n % 5 == 0)
		return (0);
	else if (n % 7 == 0 || n % 2 == 0)
		return (0);
	else
		return (1);
	return (is_prime_number(n));
}

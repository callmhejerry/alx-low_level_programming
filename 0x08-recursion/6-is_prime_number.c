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
	if (n == a)
		return (1);
	if (n % a == 0)
		return (0);
	else
	{
		a++;
		is_prime_number(n);
		a = 2;
	}
}

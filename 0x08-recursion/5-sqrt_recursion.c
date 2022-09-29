/**
 * _sqr_recursion - A function that returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	int num;
	if (n % 4 == 0)
		num = 2 * _sqrt_recursion(n / 4);
	else if (n % 9 == 0)
		num = 3 * _sqrt_recursion(n / 9);
	else if (n % 16 == 0)
		num = 4 * _sqrt_recursion(n / 16);
	else if (n % 25 == 0)
		num = 5 * _sqrt_recursion(n / 25);
	else if (n % 36 == 0)
		num = 6 * _sqrt_recursion(n / 36);
	else if (n % 49 == 0)
		num = 7 * _sqrt_recursion(n / 49);
	else if (n % 64 == 0)
		num = 8 * _sqrt_recursion(n / 64);
	else if (n % 81 == 0)
		num = 9 * _sqrt_recursion(n / 81);
	else if (n == 1)
		return (1);
	else
		return (-1);
	if (num < 0)
		return (-1);
	return (num);
}

/**
 * _pow_recursion - return the value of x raised to power y
 * @x: base number
 * @y: the power
 *
 * Return: the value of x raised to power y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int result, count;

	if (y == 0)
		return (1);
	count = 0;
	while (count < y)
	{
		result *= x;
		count++;
	}
	return (result);
}

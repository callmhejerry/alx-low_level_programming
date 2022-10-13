#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that returns the sum of all
 * its parameter
 * @n: the number of parameters
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int result;
va_list ap;

result = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < n; i++)
{
result += va_arg(ap, int);
}
va_end(ap);
return (result);
}

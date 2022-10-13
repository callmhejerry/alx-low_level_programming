#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a
 * new line
 * @separator: the string to be printed between numbers
 * @n: the numbers of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%i",va_arg(ap, int));
if (separator != NULL)
printf("%s",separator);
}
printf("\n");
va_end(ap);
}
#include "main.h"

/**
 * swap_int - this fucntion swaps the values of two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = *a;
	num2 = *b;
	*b = num1;
	*a = num2;
}

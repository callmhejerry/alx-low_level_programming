#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - A fucntion that adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub -  A function that subtracts two numbers together
 * @a: the first number
 * @b: the second number
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - A function that multiplies two numbers together
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - A function that divides two numbers
 * @a: the first number
 * @b: the second number
 * Return: the divison of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
return (-1);
return (a / b);
}

/**
 * op_mod - A function that gives the remainder of a divison
 * @a: the first number
 * @b: the second number
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
if (b == 0)
return (-1);
return (a % b);
}

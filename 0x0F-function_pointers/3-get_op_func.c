#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - A function that returns a pointer to the
 * function that corresponds to the operator given as parameter
 * @s: the character
 * Return: A function pointer
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
if (s == NULL)
{
return (NULL);
}
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
#include <stdio.h>
#include <stdlib.h>
/**
* print_name - A function that takes a callback function
* and prints a name
* @name: the name to be printed
* @f: the callback function to call to print the name
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
else
return;
}

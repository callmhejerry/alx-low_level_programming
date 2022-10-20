#include <stdio.h>

/**
  * print_something - A function that prints something before
  * the main function is called
  * Return: void
  */
void __attribute__((constructor))print_something(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

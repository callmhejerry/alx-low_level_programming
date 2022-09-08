#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out to the staandard error 
 * Return: 1 successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n",59);
	return (1);
}

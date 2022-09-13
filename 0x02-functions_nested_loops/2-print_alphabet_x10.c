#include main.h

/**
 * print_alphabet_x10 - print the letters of the
 * alphabets in lower case 10 times 
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	count = 1;
	ch = 'a';
	while (count <= 10)
	{
		print_alphabet();
		count++;
	}
}

#include <stdlib.h>

/**
 * argstostr - A function that concatenate all the
 * arguments passed to the program
 * @ac: the total number of arguments passed
 * @av: the pointer to the array of the arguments
 *
 * Return: the pointer to a new string of the
 * arguments or NULL if an error occured
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, count;

	if (ac <= 1 || av == NULL)
		return (NULL);
	count = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
			;
		count++;
	}
	count = count + 1;
	ptr = (char *)malloc(sizeof(char) * count);
	for (k = 0; k < count; )
	{
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr[k] = av[i][j];
				k++;
			}
			ptr[k] = '\n';
			k++;
		}
		ptr[k] = '\0';
		break;
	}
	return (ptr);
}

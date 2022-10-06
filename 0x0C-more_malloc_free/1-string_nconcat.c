#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function that concatenates two
 * string
 * @s1: the first string
 * @s2: the second string
 * @n: the number of strings from the second string to
 * join
 * Return: the joint string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int sn1, sn2, size_str, i, j, k;

	if (s1 == NULL)
		sn1 = strlen("");
	else
		sn1 = strlen(s1);
	if (s2 == NULL)
		sn2 = strlen("");
	else if (n >= strlen(s2))
		sn2 = strlen(s2);
	else
		sn2 = n;
	size = sn1 + sn2 + 1;
	char *str = malloc(size_str * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < sn1; j++, i++)
		str[i] = s1[j];
	for (k = 0; k < sn2; k++, i++)
		str[i] = s2[k];
	str[i] = '\0';
	return (str);
}

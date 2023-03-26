#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: the number of arguments.
 * @av: the array of arguments.
 *
 * Return: a pointer to a new string that contains the concatenated arguments,
 *         or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the length of the concatenated string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	/* Concatenate the arguments into the string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

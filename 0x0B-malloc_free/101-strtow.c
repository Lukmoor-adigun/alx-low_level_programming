#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * strtow - splits a string into words.
 *
 * @str: the string to split.
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	/*count the number of words in str */
	wc = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i = 1] == '\0'))
			wc++;
	}
	/* allocate mem for the array of words */
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	/* extract words from str and store them in the array of words */
	k = 0;
	for (i = 0; str[i]; i++)
	{
		/*ignore leading spaces */
		while (str[i] == ' ')
			i++;
		len = 0;
		for (j = i; str[j] && str[j] != ' '; j++)
			len++;
		/* allocate memory for the word */
		words[k] = malloc(sizeof(char) * (len + 1));
		if (words[k] == NULL)
		{
			/* free memory for the previously alllocated words */
			for (i = 0; i < k; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		/* copy the word into the array of words */
		strncpy(words[k], str + i, len);
		words[k][len] = '\0';
		k++;
		/* move the index to the next word */
		i = j;
	}
	/* set the last element of the array of words to NULL */
	words[k] = NULL;
	return (words);
}

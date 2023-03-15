#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 * Return: a pointer to the duplicated string, NULL if str is NULL.
 */
char *_strdup(char *str)
{
	int length;
	char *_str;

	length = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	_str = malloc(length + 1 * sizeof(char));
	if (_str == NULL)
	{
		return (NULL);
	}
	strcpy(_str, str);
	return (_str);
}

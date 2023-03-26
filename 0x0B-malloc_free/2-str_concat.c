#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: destination
 * @s2: source
 * return: empty string should return NULL, otherwise
 * content of both strings in s1
 */
char *str_concat(char *s1, char *s2)
{
	char *_str;
	int lens1;
	int lens2;
	int sum_of_len;

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	sum_of_len = lens1 + lens2;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	_str = malloc(sizeof(char) * sum_of_len + 1);
	if (_str == NULL)
	{
		return (NULL);
	}
	strcpy(_str, s1);
	strcat(_str, s2);
	return (_str);
}

#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to first occurence of character in string,
 * NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

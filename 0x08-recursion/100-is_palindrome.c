#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;
	int result;
	char *copy;

	len = strlen(s);
	copy = strdup(s);
	if (copy == NULL)
	{
		return (0);
	}
	if (len <= 1)
	{
		free(copy);
		return (1);
	}
	if (copy[0] == copy[len - 1])
	{
		copy[len - 1] = '\0';
		result = is_palindrome(copy + 1);
		free(copy);
		return (result);
	}
	else
	{
		free(copy);
		return (0);
	}
}

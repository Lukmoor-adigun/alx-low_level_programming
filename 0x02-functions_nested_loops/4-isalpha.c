#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic characters
 *
 * Return: returns 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


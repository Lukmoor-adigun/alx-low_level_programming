#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is low or upp letters
 *
 * Return: returns 1 on success 0 otherwise
 */

int _islower(int c)
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


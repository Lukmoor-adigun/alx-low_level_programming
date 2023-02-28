#include "main.h"
/**
 * _strlen - Function that checks length of a string
 *  @s: parameters to check
 *  return: length of string (when successful)
 */

int _strlen(char *s)
{
	int length  = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

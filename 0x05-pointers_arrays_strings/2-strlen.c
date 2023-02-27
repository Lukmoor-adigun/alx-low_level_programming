#include "main.h"
/**
 * -strlen - Function that checks length of a string
 *  @s: parameters to check
 *  return: lengthg of string
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

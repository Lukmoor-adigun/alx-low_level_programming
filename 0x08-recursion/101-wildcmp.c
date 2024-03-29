#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0. s2 can contain the special character *,
 * which can replace any string (including an empty string).
 * @s1: first string to compare
 * @s2: second string to compare, may contain *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	if (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2 || *s2 == '?'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

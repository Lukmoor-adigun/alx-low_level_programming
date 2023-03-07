#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to locate
 *
 * return: a ppinter to the beginning of the located substring, or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			p1 = haystack;
			p2 =  needle;
			while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
			{
				p1++;
				p2++;
			}

			if (*p2 == '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}

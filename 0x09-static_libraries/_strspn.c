#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string of characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * i
 * which consist only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; p1++)
	{
		found = 0;
		for (p2 = accept; *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
			{
				found = 1;
				break;
			}
			if (found == 0)
			{
				break;
			}
			count++;
		}

	}
	return (count);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: number of bytes
 *
 * Return: empty string if NULL is passed
 * NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1;
	unsigned int len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
	{
		n = len_s2;
	}
	result = malloc(len_s1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len_s1);
	memcpy(result + len_s1, s2, n);
	result[len_s1 + n] = '\0';
	return (result);
}

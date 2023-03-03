#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from c
 * @src: input value
 * @n: input value
 * @dest: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	strncat(dest + dest_len, src, n);

	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @src: where to check for n bytes
 * @n: bytes
 * @dest: resulting string
 * Result: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	strncat(dest + dest_len, src, n);

	return (dest);
}

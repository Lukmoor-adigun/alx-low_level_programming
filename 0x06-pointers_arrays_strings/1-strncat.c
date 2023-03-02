#include "main.h"
#include <string.h>

/**
 * _strncat - The _strncat function is similar to the _strcat function
 *  except that it will use at most n bytes from src; and src does not
 *  need to be null-terminated if it contains n or more bytes
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

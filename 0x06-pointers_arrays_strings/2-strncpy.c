#include <string.h>
#include "main.h"
/**
 * _strncpy - function that copies a string
 * @src: string to be copied
 * @dest: string to be copied to
 * @n: number of bytes to check
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strcpy(dest, src, n);
	return (dest);
}

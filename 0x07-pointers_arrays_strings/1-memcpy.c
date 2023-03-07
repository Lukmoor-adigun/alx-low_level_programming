#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory where copied data is stored
 * @src: where data is copied from
 * @n: number of bytes
 *
 * Return: copied memory with byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

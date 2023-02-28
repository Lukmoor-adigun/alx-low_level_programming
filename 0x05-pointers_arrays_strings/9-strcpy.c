#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcopy - copies the string pointed by src, including
 * the terminating null byte (\0), to the buffer pointed to by 
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return dest;
}

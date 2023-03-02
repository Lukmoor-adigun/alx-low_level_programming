#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 *  and then adds a terminating null byte
 *  @dest: string to be overwrite
 *  @src: string to be appended
 *  Return: pointer to resulting string src
 */

char *_strcat(char *dest, char *src)
{
	/* get the length of dest string */
	int dest_len = strlen(dest);

	/* copy src string to dest */
	strcpy(dest + dest_len, src);
	/* return pointer to the resulting string */
	return (dest);
}

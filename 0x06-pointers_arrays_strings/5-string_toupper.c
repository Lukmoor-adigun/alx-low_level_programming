#include "main.h"
#include <string.h>
/**
 * string_toupper - Changes all lowercase lettersof a string to uppercase
 * @str: The string to modify
 * Return: pointer to the modified string
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* ASCII value of lowercase - uppercase */
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}

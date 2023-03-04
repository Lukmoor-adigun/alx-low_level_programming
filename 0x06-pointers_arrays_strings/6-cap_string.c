#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: pointer to same string with words capitalized
 */

char *cap_string(char *str)
{
	if (str == NULL || *str == '\0')
		return (str);

	*str = toupper(*str);

	int i;

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] != '\0')
				str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}

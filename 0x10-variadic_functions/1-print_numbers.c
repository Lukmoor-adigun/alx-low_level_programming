#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;
	
	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%d\n", num);
		}
		else
		{
			printf("%d", num);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
}


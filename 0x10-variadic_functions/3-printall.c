i#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j;
    char *str;
    char *sep = "";
    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        switch (format[i])
        {
            case 'c':
                printf("%s%c", sep, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", sep, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", sep, va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                {
                    str = "(nil)";
                }
                printf("%s%s", sep, str);
                break;
            default:
                j = 1;
                break;
        }
        if (!j && sep[0] == '\0')
        {
            sep = ", ";
        }
        i++;
    }
    printf("\n");
    va_end(args);
}

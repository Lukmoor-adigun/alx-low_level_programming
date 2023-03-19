#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 *
 * @argc: counts number of argumets passed
 * @argv: pointer to array that stores strings passed int argc
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int mul;
	int i;

	mul = 1;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}

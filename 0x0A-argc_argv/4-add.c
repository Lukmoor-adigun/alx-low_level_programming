#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 *
 * @argc: stores argument count
 * @argv: pointer to array to store strings to argc
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *argc = argv[i];

		while (*argc)
		{
			if (!isdigit(*argc))
			{
				printf("Error\n");
					return (1);
			}
			argc++;
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

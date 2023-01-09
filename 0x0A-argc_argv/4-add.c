#include "main.h"

/**
 * main - adds positive numbers
 * @argc: arguments counter
 * @argv: array of pointers to strings
 *
 * Return: 0 if no errors, else
 */
 int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


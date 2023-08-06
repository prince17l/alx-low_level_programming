#include <stdio.h>
#include "main.h"
/**
 * main - it is a main function
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i,j;
	int sum = 0;
	int numb = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				numb = numb * 10 + (argv[i][j] - 48);
				sum += numb;
			}
		}
	}
	printf("%d", sum);
	return (0);
}

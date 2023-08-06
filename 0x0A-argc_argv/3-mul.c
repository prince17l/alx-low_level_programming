#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - it is a main function
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int numb1 = atoi(argv[1]);
	int numb2 = atoi(argv[2]);
	int multipl;

	if (argc == 3)
	{
		multipl = numb1 * numb2;
		printf("%d\n", multipl);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

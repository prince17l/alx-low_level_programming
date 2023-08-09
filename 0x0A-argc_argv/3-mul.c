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
	int numb1, numb2;
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	sum = numb1 * numb2;
	printf("%d\n", sum);
	return (0);
}

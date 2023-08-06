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
	if (argc == 3)
	{
		int multipl = *argv;
		printf("%d\n", multipl);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}

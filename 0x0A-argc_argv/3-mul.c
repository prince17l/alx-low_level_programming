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
		int multipl = (argv[1] - 48) * (argv[2] - 48);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}

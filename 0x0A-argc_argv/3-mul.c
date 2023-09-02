#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a main function
 * @argc: size of argv
 * @argv: command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

#include <stdio.h>
/**
 * main - is a main function
 * @argc: size of argv
 * @argv: command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - is a main function
 * @argc: size of argv
 * @argv: command line arguments
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

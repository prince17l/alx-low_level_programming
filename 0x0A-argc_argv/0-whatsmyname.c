#include <stdio.h>
#include "main.h"
/**
 * main - it is a main function
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%S\n", *argv);
	return (0);
}

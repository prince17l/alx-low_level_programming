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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}	

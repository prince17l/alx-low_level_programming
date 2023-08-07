#include <stdio.h>
#include "main.h"
/**
 * create_array - it is a main function
 * @size: unsignes int variable
 * @c: char variable
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	array = malloc(size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (array[1] == c)
	{
		return (array);
	}
	else
	{
		return (NULL);
	}
}

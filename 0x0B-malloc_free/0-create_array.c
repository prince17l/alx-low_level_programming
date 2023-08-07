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
	unsigned int i;

	if (size == 0 || size == NULL )
	{
		return (NULL);
	}
	array = mallocsizeof((char) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

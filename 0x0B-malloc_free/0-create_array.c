#include "main.h"
#include <stdlib.h>
/**
 * create_array - is the main function
 * @size: a variable with type unsigned int
 * @c: varable with type char
 * Return: char array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

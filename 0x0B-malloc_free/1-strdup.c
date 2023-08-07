#include <stdlib.h>
#include "main.h"
/**
 * _strdup - it is a main function
 * @str: char array
 * Return: char
 */
char *_strdup(char *str)
{
	char *array;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		array[k] = str[k];

	return (array);
}

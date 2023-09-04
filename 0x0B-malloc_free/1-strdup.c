#include "main.h"
#include <stdlib.h>
/**
 * _strdup - is the main function
 * @str: is pointer to string
 * Return: char array
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	newstr = malloc((sizeof(char) * size) + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}

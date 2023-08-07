#include <stdlib.h>
#include "main.h"
/**
 * _strdup - it is a main function
 * @str: char array
 * Return: char
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	newstr = malloc(sizeof(str) + 5);
	for (i = 0; i < sizeof(str) + 5; i++)
	{
		newstr[i] = str[i];
	}
	if (newstr == NULL || str == NULL)
	{
		return (NULL);
	}
	return (newstr);
}

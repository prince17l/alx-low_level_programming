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
	int k = 0;

	while (str[k] != '\0')
		k++;
	if (str == NULL)
	{
		return (NULL);
	}
	newstr = malloc(sizeof(char) * (k + 1));
	for (i = 0; i < k; i++)
	{
		newstr[i] = str[i];
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}

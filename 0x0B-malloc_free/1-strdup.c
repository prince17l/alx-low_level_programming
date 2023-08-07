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

	newstr = malloc(sizeof(str));
	if (str == NULL || sizeof(newstr) != sizeof(str))
	{
		return (NULL);
	}
	for (i = 0; str[i] <= '\0'; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}

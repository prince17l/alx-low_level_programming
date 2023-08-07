#include <stdlib.h>
#include "main.h"
/**
 * str_concat - it is a main function
 * @s1: char array
 * @s2: char array
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, size_1, size_2 = 0;
	int size;
	char *newstr;

	while (s1[size_1] != '\0' || s1 != NULL)
		size_1++;
	while (s1[size_2] != '\0' || s2 != NULL)
		size_2++;
	size = size_1 + size_2 + 1;
	newstr = malloc(size - 1);
	for (i = 0; i < size; i++)
	{
		if (i == size_1)
		{
			newstr[i] = ' ';
		}
		else if (i < size_1)
		{
			newstr[i] = s1[i];
		}
		else
		{
			newstr[i] = s2[i];
		}
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}

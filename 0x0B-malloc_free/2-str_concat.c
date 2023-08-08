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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size_1] != '\0')
		size_1++;
	while (s1[size_2] != '\0')
		size_2++;
	size = size_1 + size_2;
	newstr = malloc(sizeof(char) * size + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		newstr[i] = s2[size_1];
		size_1++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

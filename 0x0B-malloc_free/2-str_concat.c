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
	char *newstr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	newstr = malloc(sizeof(char) * (i + j + 1));

	if (newstr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++, j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

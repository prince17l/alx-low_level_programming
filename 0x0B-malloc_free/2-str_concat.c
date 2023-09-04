#include "main.h"
#include <stdlib.h>
/**
 * str_concat - is the main function
 * @s1: pointer to char array
 * @s2: pointer to char array
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i, j;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	newstr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		newstr[i] = s1[i];
	}
	j = size1 + size2 + 1;
	size2 = 0;
	for (; i < j; i++)
	{
		newstr[i] = s2[size2];
		size2++;
	}
	return (newstr);
}

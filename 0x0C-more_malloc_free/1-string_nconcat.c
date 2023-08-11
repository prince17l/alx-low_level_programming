#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - it is a main function
 * @n: variable with type unsigned int
 * @s1: string pointer
 * @s2: string pointer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	int i, j;
	int size1 = 0;
	int len2 = 0;
	int sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] <= '\0'; i++)
	{
		size1++;
	}
	while (s2[j] != '\0')
		len2++;
	if (n >= len2)
	{
		newstr = malloc(size1 + len2  + 1);
	}
	else
	{
		newstr = malloc(size1 + n + 1);
		len2 = n;
	}
	if (newstr == NULL)
		return (NULL);
	sum = size1 + len2;
	for (i = 0; i < size1; i++)
	{
		newstr[i] = s1[i];
	}
	i = 0;
	for (j = size1; j < sum; j++)
	{
		newstr[j] = s2[i];
		i++;
	}
	newstr[sum] = '\0';
	return (newstr);
}

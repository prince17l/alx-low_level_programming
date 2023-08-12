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
	int siz1 = 0, siz2 = 0, i, j;
	int k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[siz1] != '\0')
		siz1++;
	while (s2[siz2] != '\0')
		siz2++;

	if (n >= siz2)
	{
		newstr = malloc(siz1 + siz2 + 1);
	}
	else
	{
		newstr = malloc(siz1 + n + 1);
	}

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= siz1; i++)
	{
		newstr[i] = s1[i];
		j++;
	}
	if(n >= siz2)
	{
		for (; j < n; j++)
		{
			newstr[j] = s2[k];
			k++;
		}
	}
	else
	{
		while (s2[k] != '\0')
		{
			newstr[j] = s2[k];
			k++;
			j++;
		}
	}
	newstr[j] = '\0';
	return (newstr);
}

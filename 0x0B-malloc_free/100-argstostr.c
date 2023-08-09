#include <stdlib.h>
#include "main.h"
/**
 * argstostr - it is a main function
 * @av: 2d array with type char
 * @ac: variable with type int
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size += ac;

	newstr = malloc(sizeof(char) * size + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		newstr[k] = av[i][j];
		k++;
	}
	if (newstr[k] == '\0')
	{
		newstr[k++] = '\n';
	}
	}
	return (newstr);
}

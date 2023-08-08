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
	char *newstr;
	int i, j, size;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		while (av[i][size] != '\0')
		{
			size++;
		}
	}
	newstr = malloc(size + ac + 1);
	if (newstr == NULL)
		return (NULL);
	i = 1;
	for (j = 1; j < ac; j++)
	{
		for (; av[i] <= '\0'; i++)
		{
			newstr[k] = av[j][i];
			k++;
		}
		newstr[k] = '\n';
		k++;
	}
	newstr[k] = '\0';
	return (newstr);

}

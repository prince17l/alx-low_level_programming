#include <stdlib.h>
#include "main.h"
/**
 * argstostr - will concatnate all arguments
 * @ac: number of arguments
 * @av: argument array
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i, j, k = 0, allsize = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			allsize++;
			j++;
		}
		allsize++;
	}
	newstr = malloc(sizeof(char) * (allsize + 1));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			newstr[k] = av[i][j];
			j++;
			k++;
		}
		newstr[k] = '\n';
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}

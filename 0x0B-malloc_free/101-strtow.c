#include <stdlib.h>
#include "main.h"
/**
 * strtow - will tern string to words
 * @str: string to change into words
 * Return: array of string
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k, nofwords = 1;
	int sizeofword = 0;

	if (str == NULL || str == "")
		return (NULL);
	while (str[i])
	{
		if (str[i] == " ")
			nofwords++;
	}
	words = malloc(sizeof(char *) * nofwords + 1);
	if (words == NULL)
		return (NULL);
	for (i = 0; i < nofwords; i++)
	{
		while (str[j] != " " || str[j] != '\0')
		{
			sizeofword++;
			j++;
		}
		sizeofword++;
		words[i] = malloc(sizeof(char) * sizeofword);
		if (word[i] == NULL)
		{
			for (; i >= 0; i--)
				free(words[i];
			free(words);
			return (NULL);
		}
	}
	
}

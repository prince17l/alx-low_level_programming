#include "main.h"
/**
 *  *_strchr - this is a _strchr function.
 *  description - it will locat memory area.
 *  @s: is a pointer to char
 *  @c: is a variable type char
 *  Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else
		{
			return (NULL);
		}
	}
}

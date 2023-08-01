#include "main.h"
/**
 *  *_strpbrk - this is a _strpbrk function.
 *  description - it will locat memory area.
 *  @s: is a pointer to char
 *  @accept: is a pointer to char
 *  Return: char
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}


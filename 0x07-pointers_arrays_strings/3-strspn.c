#include "main.h"
/**
 *  *_strspn - this is a _strspn function.
 *  description - it will locat memory area.
 *  @s: is a pointer to char
 *  @accept: is a pointer to char
 *  Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

#include "main.h"
/**
*  *_memset - this is a _memeset function.
*  description - it will print single digit numbers.
*  @s: poiter to char
*  @b: parameter with type char
*  @n: parameter with type unsigned int
*  Return: integer
*/
int main(void)
{
	return (0);
}
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

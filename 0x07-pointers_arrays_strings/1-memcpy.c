#include "main.h"
/**
 *  *_memcpy - this is a _memcpy function.
 *  description - it will copy memory area.
 *  @dest: is a pointer to char
 *  @src i: s a pointer to char
 *  @n: is a unsigned int
 *  Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"
/**
 * _strlen_recursion - will return the len of s.
 * @s: a variable with type string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = _strlen_recoursion(s + 1);
	}
	else
	{
		return (count);
	}
}

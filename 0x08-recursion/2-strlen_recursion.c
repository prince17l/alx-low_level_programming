#include "main.h"
/**
 * _print_rev_recursion - will print a string.
 * @s: a variable with type string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return (count);
	}
}

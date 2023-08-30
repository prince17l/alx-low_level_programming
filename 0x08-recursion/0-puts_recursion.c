#include "main.h"
/**
 * _puts_recursion - will print a string.
 * @s: a variable with type string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	else
	{
		return;
	}
}

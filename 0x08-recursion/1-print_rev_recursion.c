#include "main.h"
/**
 * _puts_rev_recursion - will print a string.
 * @s: a variable with type string
 * Return: void
 */
void _puts_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}

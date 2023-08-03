#include "main.h"
/**
*  _puts_recursion - this is a _puts_recursion function.
*  description - it will print single digit numbers.
*  @s: a pointer to char
*  Return: void
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}

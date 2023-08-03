#include "main.h"
/**
*  _puts_rev_recursion - this is a _puts_recursion function.
*  description - it will print string revers.
*  @s: a pointer to char
*  Return: void
*/
void _print_rev_recursion(char *s)
{
	int i = 0;
	int j = 0;

	if (s[i] != '\0' && s[j] != '\0')
	{
		i++;
		j++;
		_print_rev_recursion(s);
	}

	if (s[i + j] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[j - 1]);
	j--;
	_print_rev_recursion(s);
}

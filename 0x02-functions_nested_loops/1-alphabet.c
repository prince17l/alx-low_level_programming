#include "main.h"
/**
*  print_alphabet - this is a main function.
*  description - it will print a-z.
*  Return: void
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter != 'z' + 1)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

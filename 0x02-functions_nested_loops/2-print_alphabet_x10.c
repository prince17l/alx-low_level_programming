#include "main.h"
/**
*  main - this is a main function.
*  description - it will print a-z x10.
*  Return: void
*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;
	for (i = 0; i <10; i++)
	{
		while (letter != 'z' + 1)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

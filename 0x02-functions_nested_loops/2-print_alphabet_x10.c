#include "main.h"
/**
*  print_alphabet_x10 - this is a main function.
*  description - it will print a-z x10.
*  Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}

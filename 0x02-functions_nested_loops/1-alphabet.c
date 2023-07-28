#include "main.h"
/**
*  main - this is a main function.
*  description - it will print a-z.
*  Return: integer
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter != 'z' + 1)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}

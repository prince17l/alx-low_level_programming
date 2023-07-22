#include <stdio.h>
/**
*  main - this is a main function.
*  description - it is a header file with many functions.
*  Return: integer
*/
int put(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	return (0);
}
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
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;
	for (i = 0; i <10; i++)
	{
		while (letter != 'z' + 1)
		{
			putchar(letter);
			letter;
		}
		putchar('\n');
	}
}

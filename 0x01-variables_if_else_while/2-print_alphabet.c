#include <stdio.h>
/**
*  main - this is a main function.
*  description - it will print a-z.
*  Return: integer
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}

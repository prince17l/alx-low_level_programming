#include <stdio.h>
/**
*  main - this is a main function.
*  description - it will print a-z.
*  Return: integer
*/
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
	putchar(lower);
	lower++;
	}

	while (upper <= 'Z')
	{
	putchar(upper);
	upper++;
	}
	putchar('\n');
	return (0);
}

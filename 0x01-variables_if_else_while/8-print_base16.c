#include <stdio.h>
/**
*  main - this is a main function.
*  description - it will print a-z.
*  Return: integer
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
	putchar('0' + number);
	number++;
	}
	number = 0;
	while (number < 6)
	{
	putchar('a' + number);
	number++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
*  main - this is a main function.
*  description - it will print 9-0 with putchar.
*  Return: integer
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar('9' - number);
		number++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
*  main - this is a main function.
*  description - it will print 0-9 with putchar.
*  Return: integer
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar('0' + number);
		if (number == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
			number++;
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
*  print_sign - this is a main function.
*  description - it will check the sign of n.
*  @n: is a variable type int.
*  Return: int
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		-putchar('0');
		return (0);
	}
}

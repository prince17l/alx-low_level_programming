#include "main.h"
/**
 * _pow_recursion - will return x power of y.
 * @x: a variable with type int
 * @y: a variable with type int
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0 || y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));

}

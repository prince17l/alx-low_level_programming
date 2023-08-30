#include "main.h"
/**
 * factorial - will return factorial of n.
 * @n: a variable with type int
 * Return: int
 */
int factorial(int n)
{
	int factor = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
	{
		factor = n * factorial(n - 1);
	}
	return (factor);
}

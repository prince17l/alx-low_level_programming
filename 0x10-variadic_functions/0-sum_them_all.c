#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*  sum_them_all - this is a main function.
*  @n: variable with type int
*  Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list pointer;
	int sum = 0;

	va_start(pointer, n);
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(pointer, unsigned int);
	}
	va_end(pointer);
	return (sum);
}

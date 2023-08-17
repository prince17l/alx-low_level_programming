#include <stdarg.h>
#include "variadic_functions.h"
/**
*  sum_them_all - this is a main function.
*  @n: variable with type int
*  Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

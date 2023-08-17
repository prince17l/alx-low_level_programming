#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*  print_numbers - this is a main function.
*  @n: variable with type int
*  @separator: variable with type char
*  Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pointint;
	int i;

	va_start(pointint, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pointint, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(pointint);
	printf("\n");
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*  print_strings - this is a main function.
*  @n: variable with type int
*  @separator: variable with type char
*  Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(p);
}

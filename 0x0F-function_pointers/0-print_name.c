#include <stdio.h>
#include "function_pointers.h"
/**
*  print_name - this is a main function.
*  @name: string
*  @f: function pointer
*  Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

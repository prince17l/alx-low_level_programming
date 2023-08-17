#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
*  array_iterator - this is a main function.
*  @array: int array
*  @size: size of byte
*  @action: function pointer
*  Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "main.h"
/**
*  _isalpha - this is a main function.
*  description - it will check letters.
*  @c: is a variable type char.
*  Return: int
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
*  _islower - this is a main function.
*  description - it will check small letters.
*  Return: int
*/
int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}

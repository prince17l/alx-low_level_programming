#include "main.h"
/**
 *  print_chessboard - this is a print_chessboard function.
 *  description - it will locat memory area.
 *  @a: is a pointer to char
 *  Return: char
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}

}

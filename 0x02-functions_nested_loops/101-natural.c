#include <stdio.h>
/**
*  main - this is a main function.
*  description - it will print the sum of multipl.
*  Return: int
*/
int main(void)
{
	int sum = 0;
	int i;

	for (i  = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/*
  This is the main function 
  betty style doc for function main goes there
 */
int main(void)

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*check if n is positive*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/*check if n is zero*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/*check if n is negative*/
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

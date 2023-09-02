#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a main function
 * @argc: size of argv
 * @argv: command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i, change = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (atoi(argv[1]) < 0)
	{
		printf("0");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (money % coins[i] == money)
		{
		}
		else
		{
			change += money / coins[i];
			money = money % coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}

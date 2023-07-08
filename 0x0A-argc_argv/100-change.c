#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * converter - funtion that does the maths calculations
 * @a: number of variables passed
 * Return: number of coins needed
 */
int converter(int a)
{
	int cnt = 0;

	while (a != 0)
	{
		if (a % 10 == 9 || a % 10 == 7)
		{
			a -= 2;
		}
		else if (a % 25 == 0)
		{
			a -= 25;
		}
		else if (a % 10 == 0)
		{
			a -= 10;
		}
		else if (a % 5 == 0)
		{
			a -= 5;
		}
		else if (a % 2 == 0)
		{
			if (a % 10 == 0)
				a -= 1;
			else
				a -= 2;
		}
		else
			a -= 1;

		cnt++;
	}
	return (cnt);
}
/**
 * main - takes one argument for minimul coin count
 * @argc: number of arguments
 * @argv: array
 * Return: 0 if exactly 1 argument passed, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		coin = converter(i);
		printf("%d\n", coin);
	}
	return (0);
}

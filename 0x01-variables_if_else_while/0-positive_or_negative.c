#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Script checks +ive vs -ive  number
 *
 *  Description: The program checks if number is negetive or positive
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d : is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negitive\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

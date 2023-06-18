#include <stdlib.h>
#include <time.h>

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

	if (n > 0)
	{
		printf("%n : is positive\n");
	}
	if (n < 0)
	{
		printf("%n is negitive\n");
	}
	else
		printf("%n is zero\n");

	return (0);
}

#include <stdio.h>
/**
 * main -  program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	unsigned long Fib1 = 0, Fib2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = Fib1 + Fib2;
		printf("%lu,", sum);

		Fib1 = Fib2;
		Fib2 = sum;
		if (num != 49)
		{
			printf(" ");
		}
		else
			printf("\n");
	}
	return (0);
}

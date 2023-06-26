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
	unsigned long Fib1A, Fib1B, Fib2A, Fib2B;
	unsigned long FibA, FibB;

	for (num = 0; num < 92; num++)
	{
		sum = Fib1 + Fib2;
		printf("%lu, ", sum);
		Fib1 = Fib2;
		Fib2 = sum;
	}
	Fib1A = Fib1 / 10000000000;
	Fib2A = Fib2 / 10000000000;
	Fib1B = Fib1 % 10000000000;
	Fib2B = Fib2 % 10000000000;
	for (num = 93; num < 99; num++)
	{
		FibA = Fib1A + Fib2A;
		FibB = Fib1B + Fib2B;
		if (Fib1B + Fib2B > 9999999999)
		{
			FibA += 1;
			FibB %= 10000000000;
		}
		printf("%lu%lu", FibA, FibB);
		if (sum != 98)
		{
			printf(", ");
			Fib1A = Fib2A;
			Fib1B = Fib2B;
			Fib2A = FibA;
			Fib2B = FibB;
		}
	}
	printf("\n");
	return (0);
}

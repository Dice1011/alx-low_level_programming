#include <stdio.h>
/**
 * main - prints first 98 fibbo sequences
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long Fib1 = 0, Fib2 = 1, sum;
	unsigned long Fib1A, Fib1B, Fib2A, Fib2B;
	unsigned long FibA, FibB;

	for (i  = 0; i < 92; i++)
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
	for (i = 93; i < 99; i++)
	{
		FibA = Fib1A + Fib2A;
		FibB = Fib1B + Fib2B;
		if ((Fib1B + Fib2B) > 9999999999)
		{
			FibA += 1;
			FibB %= 10000000000;
		}
		printf("%lu%lu", FibA, FibB);
		if (i != 99)
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

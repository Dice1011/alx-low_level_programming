#include <stdio.h>
/**
 * main - program prins fibbo values from 1 - 4000000
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	float total;
	unsigned long Fib1 = 0, Fib2 = 1, sum;

	while (1)
	{
		sum = Fib1 + Fib2;

		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			total += sum;
		}
		Fib1 = Fib2;
		Fib2 = sum;
	}
	printf("%f\n", total);

	return (0);
}

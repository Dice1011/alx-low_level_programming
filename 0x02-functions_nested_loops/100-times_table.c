#include "main.h"
/**
 * print_times_table - list all numbers that are multiples of 3 and 5 but below 1024
 *
 * Return: ALways 0
 */

void print_times_table(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	_putchar("%d\n", sum);
	return (0);
}

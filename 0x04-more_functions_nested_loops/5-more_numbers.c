#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * from 0 - 14
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			i = k;
			if (k > 9)
			{
				_putchar(1 + 48);
				i = k % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
